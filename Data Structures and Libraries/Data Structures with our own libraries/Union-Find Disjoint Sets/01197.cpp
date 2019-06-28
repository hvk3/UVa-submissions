#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

struct DSU
{
	int rank, parent;
};

int DSU_find(int x, DSU sets[])
{
	if (x != sets[x].parent)
		sets[x].parent = DSU_find(sets[x].parent, sets);
	return sets[x].parent;
}

void DSU_union(int x, int y, DSU sets[])
{
	int x_parent = DSU_find(x, sets);
	int y_parent = DSU_find(y, sets);

	if (sets[x_parent].rank >= sets[y_parent].rank)
	{
		sets[y_parent].parent = x_parent;
		if (sets[x_parent].rank == sets[y_parent].rank)
			sets[x_parent].rank++;
	}
	else
		sets[x_parent].parent = y_parent;
}

int main()
{
	ios::sync_with_stdio(0);
	int i, n, m, k, x, y;
	while (true)
	{
		cin >> n >> m;
		if (!n && !m)
			break;
		DSU sets[n];
		for (i = 0; i < n; i++)
		{
			sets[i].parent = i;
			sets[i].rank = 0;
		}
		while (m--)
		{
			cin >> k;
			int a[k];
			for (i = 0; i < k; i++)
				cin >> a[i];
			for (i = 0; i < k - 1; i++)
				DSU_union(a[i], a[i + 1], sets);
		}
		int root = DSU_find(0, sets), cnt = 1;
		for (i = 1; i < n; i++)
			cnt += (DSU_find(i, sets) == root);
		cout << cnt << '\n';
	}
	return 0;
}