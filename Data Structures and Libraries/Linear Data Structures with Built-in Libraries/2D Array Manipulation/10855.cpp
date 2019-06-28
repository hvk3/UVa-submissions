#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int find(char **x, char **y, int n, int m)
{
	int cnt = 0, i, j, k, l, ans;
	for (i = 0; i <= n - m; i++)
	{
		for (j = 0; j <= n - m; j++)
		{
			ans = 0;
			for (k = 0; k < m; k++)
				for (l = 0; l < m; l++)
					ans += (y[k][l] == x[i + k][j + l]);
			cnt += (ans == m * m);
		}
	}
	return cnt;
}

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

int main()
{
	ios::sync_with_stdio(0);
	int i, j, n, m;
	while (true)
	{
		cin >> n >> m;
		if (!n and !m)
			break;
		char **a = new char*[n], **b = new char*[m];
		for (i = 0; i < n; i++)
		{
			a[i] = new char[n];
			for (j = 0; j < n; j++)
				cin >> a[i][j];
		}
		for (i = 0; i < m; i++)
		{
			b[i] = new char[m];
			for (j = 0; j < m; j++)
				cin >> b[i][j];
		}
		int cnt[4];
		for (i = 0; i < 4; i++)
		{
			cout << find(a, b, n, m);
			if (i != 3)
				cout << ' ';
			b = rotate(b, m);
		}
		cout << '\n';
	}
	return 0;
}