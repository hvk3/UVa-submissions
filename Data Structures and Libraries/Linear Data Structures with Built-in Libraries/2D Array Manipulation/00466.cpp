#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

char **rotate(char **x, int n)
{
	int tmp, i, j;
	for (i = 0; i < n / 2; i++)
		for (j = i; j < n - 1 - i; j++)
		{
			tmp = x[i][j];
			x[i][j] = x[n - 1 - j][i];
			x[n - 1 - j][i] = x[n - 1 - i][n - 1 - j];
			x[n - 1 - i][n - 1 - j] = x[j][n - 1 - i];
			x[j][n - 1 - i] = tmp;
		}
	return x;
}

char **flip(char **x, int n)
{
	int tmp, i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			if (i >= n - 1 - i)
				break;
			tmp = x[i][j];
			x[i][j] = x[n - 1 - i][j];
			x[n - 1 - i][j] = tmp;
		}
	return x;
}

bool check_equal(char **a, char **b, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] != b[i][j])
				return false;
	return true;
}

int main()
{
	ios::sync_with_stdio(0);
	int i, j, n, tc = 0;
	while (cin >> n)
	{
		char **a = new char*[n], **b = new char*[n], **a_flipped = new char*[n];
		tc++;
		string s1[n], s2[n];
		for (i = 0; i < n; i++)
		{
			cin >> s1[i] >> s2[i];
			a[i] = new char[n];
			b[i] = new char[n];
			a_flipped[i] = new char[n];
			strcpy(a[i], s1[i].c_str());
			strcpy(a_flipped[i], s1[i].c_str());
			strcpy(b[i], s2[i].c_str());
		}
		a_flipped = flip(a_flipped, n);
		cout << "Pattern " << tc << " was ";
		if (check_equal(a, b, n))
			cout << "preserved.";
		else
		{
			int rotated_only = -1;
			for (i = 1; i < 4; i++)
			{
				a = rotate(a, n);
				if (check_equal(a, b, n))
				{
					rotated_only = i;
					break;
				}
			}
			if (rotated_only != -1)
				cout << "rotated " << 90 * i << " degrees.";
			else
			{
				if (check_equal(a_flipped, b, n))
					cout << "reflected vertically.";
				else
				{
					int flipped_rotated = -1;
					for (i = 1; i < 4; i++)
					{
						a_flipped = rotate(a_flipped, n);
						if (check_equal(a_flipped, b, n))
						{
							flipped_rotated = i;
							break;
						}
					}
					if (flipped_rotated != -1)
						cout << "reflected vertically and rotated " << 90 * i << " degrees.";
					else
						cout << "improperly transformed.";
				}
			}
		}
		cout << '\n';
	}
	return 0;
}