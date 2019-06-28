#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

void build(int node, int start, int end, int a[], int tree[])
{
	if (start == end)
	{
		tree[node] = a[start];
	}
	else
	{
		int mid = (start + end) / 2;
		build(2 * node, start, mid, a, tree);
		build(2 * node + 1, mid + 1, end, a, tree);
		tree[node] = tree[node * 2] * tree[node * 2 + 1];
	}
}

void update(int node, int start, int end, int idx, ld val, int a[], int tree[])
{
	if (start == end)
	{
		if (a[idx] == 0)
		{
			a[idx] = val;
			tree[node] = val;
		}
		else
		{
			a[idx] = int(a[idx] * val);
			tree[node] = int(tree[node] * val);
		}
	}
	else
	{
		int mid = (start + end) / 2;
		if (start <= idx and idx <= mid)
			update(node * 2, start, mid, idx, val, a, tree);
		else
			update(node * 2 + 1, mid + 1, end, idx, val, a, tree);
		tree[node] = tree[2 * node] * tree[2 * node + 1];
	}
}

int query(int node, int start, int end, int l, int r, int a[], int tree[])
{
	if (r < start or end < l)
		return 1;
	if (l <= start and r >= end)
		return tree[node];
	int mid = (start + end) / 2;
	int v1 = query(node * 2, start, mid, l, r, a, tree);
	int v2 = query(node * 2 + 1, mid + 1, end, l, r, a, tree);
	return v1 * v2;
}

int signum(int x)
{
	return (x > 0 ? 1 : -1);
}

int main()
{
	ios::sync_with_stdio(0);
	int i, n, q, x, y;
	char op;
	while (cin >> n >> q)
	{
		int a[n], tree[4 * n], curr_value;
		ld new_value;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] != 0)
				a[i] = signum(a[i]);
		}
		build(1, 0, n - 1, a, tree);
		while (q--)
		{
			cin >> op >> x >> y;
			if (op == 'C')
			{
				x--;
				curr_value = a[x];
				if (y != 0)
					y = signum(y);
				if (curr_value != 0)
					new_value = y / curr_value;
				else
					new_value = y;
				update(1, 0, n - 1, x, new_value, a, tree);
			}
			else
			{
				int result = query(1, 0, n - 1, x - 1, y - 1, a, tree);
				if (result == 0)
					cout << '0';
				else if (result > 0)
					cout << '+';
				else
					cout << '-';
			}
		}
		cout << '\n';
	}
	return 0;
}