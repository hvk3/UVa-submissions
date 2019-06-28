#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

struct DSU
{
	int rank, parent, size;
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
		sets[x_parent].size += sets[y_parent].size;
		if (sets[x_parent].rank == sets[y_parent].rank)
			sets[x_parent].rank++;
	}
	else
	{
		sets[x_parent].parent = y_parent;
		sets[y_parent].size += sets[x_parent].size;
	}
}

int main()
{
	ios::sync_with_stdio(0);
	int i, t, x, y, n, m;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		DSU sets[n];
		set<pair<int, int>> unique_pairs;
		pair<int, int> tmp;
		for (i = 0; i < n; i++)
		{
			sets[i].parent = i;
			sets[i].size = 1;
			sets[i].rank = 0;
		}
		for (i = 0; i < m; i++)
		{
			cin >> x >> y;
			tmp = make_pair(min(x, y), max(x, y));
			if (unique_pairs.find(tmp) != unique_pairs.end())
				continue;
			unique_pairs.insert(tmp);
			if (DSU_find(x - 1, sets) == DSU_find(y - 1, sets))
				continue;
			DSU_union(x - 1, y - 1, sets);
		}
		int mx = INT_MIN, parent;
		for (i = 0; i < n; i++)
		{
			parent = DSU_find(i, sets);
			mx = max(mx, sets[parent].size);
		}
		cout << mx << '\n';
	}
	return 0;
}