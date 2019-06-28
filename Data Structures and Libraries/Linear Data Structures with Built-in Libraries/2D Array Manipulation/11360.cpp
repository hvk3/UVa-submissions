#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i, j, n, t;
	char x;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n;
		int a[n][n], nb_cmds, p, q, tmp;
		string cmd;
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
			{
				cin >> x;
				a[i][j] = x - '0';
			}
		cin >> nb_cmds;
		while (nb_cmds--)
		{
			cin >> cmd;
			if (cmd == "inc")
			{
				for (i = 0; i < n; i++)
					for (j = 0; j < n; j++)
						a[i][j] = (a[i][j] + 1) % 10;
			}
			else if (cmd == "dec")
			{
				for (i = 0; i < n; i++)
					for (j = 0; j < n; j++)
						a[i][j] = (a[i][j] - 1 + 10) % 10;
			}
			else if (cmd == "transpose")
			{
				for (i = 0; i < n; i++)
					for (j = i; j < n; j++)
					{
						tmp = a[j][i];
						a[j][i] = a[i][j];
						a[i][j] = tmp;
					}
			}
			else
			{
				cin >> p >> q;
				p--, q--;
				if (cmd == "col")
				{
					for (i = 0; i < n; i++)
					{
						tmp = a[i][p];
						a[i][p] = a[i][q];
						a[i][q] = tmp;
					}
				}
				else
				{
					for (i = 0; i < n; i++)
					{
						tmp = a[p][i];
						a[p][i] = a[q][i];
						a[q][i] = tmp;
					}
				}
			}
		}
		cout << "Case #" << tc << '\n';
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				cout << a[i][j];
			cout << '\n';
		}
		cout << '\n';
	}
	return 0;
}