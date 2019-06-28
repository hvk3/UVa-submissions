#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

void update(int idx, int val, int tree[], int n)
{
	for (; idx <= n; idx += (idx & -idx))
		tree[idx] += val;
}

int query(int idx, int tree[], int n)
{
	int sum = 0;
	for (; idx > 0; idx -= (idx & -idx))
		sum += tree[idx];
	return sum;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int i, n, x, y, tc = 1, new_val;
	char op;
	while (true)
	{
		cin >> n;
		if (n == 0)
			break;
		if (tc > 1)
			cout << '\n';
		int a[n + 10], tree[n + 10];
		for (i = 1; i <= n; i++)
			tree[i] = 0;
		for (i = 1; i <= n; i++)
		{
			cin >> a[i];
			update(i, a[i], tree, n);
		}
		cout << "Case " << tc++ << ":\n";
		while (true)
		{
			cin >> op;
			if (op == 'E')
			{
				cin.ignore(3);
				break;
			}
			else
			{
				cin >> x >> y;
				if (op == 'M')
					cout << query(y, tree, n) - query(x - 1, tree, n) << '\n';
				else
				{
					new_val = y - a[x];
					update(x, new_val, tree, n);
					a[x] = y;
				}
			}
		}
	}
	return 0;
}