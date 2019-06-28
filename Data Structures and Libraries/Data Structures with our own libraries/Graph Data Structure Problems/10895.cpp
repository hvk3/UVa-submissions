#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i, n, m, j, non_zero;
	while (cin >> n >> m)
	{
		int a[n][m], b[m][n];
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
			{
				a[i][j] = 0;
				b[j][i] = 0;
			}
		for (i = 0; i < n; i++)
		{
			cin >> non_zero;
			int columns_values[2 * non_zero];
			for (j = 0; j < 2 * non_zero; j++)
				cin >> columns_values[j];
			for (j = 0; j < non_zero; j++)
				a[i][columns_values[j] - 1] = columns_values[non_zero + j];
		}
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				b[j][i] = a[i][j];
		cout << m << ' ' << n << '\n';
		non_zero = 0;
		for (i = 0; i < m; i++)
		{
			vector<int> pos;
			for (j = 0; j < n; j++)
				if (b[i][j] != 0)
					pos.push_back(j);
			cout << pos.size();
			for (j = 0; j < pos.size(); j++)
				cout << ' ' << 1 + pos[j];
			cout << '\n';
			for (j = 0; j < pos.size(); j++)
			{
				cout << b[i][pos[j]];
				if (j != pos.size() - 1)
					cout << ' ';
			}
			cout << '\n';
		}
	}
	return 0;
}