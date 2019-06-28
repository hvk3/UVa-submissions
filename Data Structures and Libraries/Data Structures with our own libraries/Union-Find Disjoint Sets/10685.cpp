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
	int i, n, m, x_pos, y_pos;
	string x, y, tmp;
	while (true)
	{
		cin >> n >> m;
		if (n + m == 0)
			break;
		map<string, int> map_;
		DSU sets[n];
		for (i = 0; i < n; i++)
		{
			cin >> tmp;
			map_[tmp] = i;
			sets[i].size = 1;
			sets[i].rank = 0;
			sets[i].parent = i;
		}
		set<pair<int, int>> unique_pairs;
		pair<int, int> tmp_;
		for (i = 0; i < m; i++)
		{
			cin >> x >> y;
			x_pos = map_[x];
			y_pos = map_[y];
			tmp_ = make_pair(min(x_pos, y_pos), max(x_pos, y_pos));
			if (unique_pairs.find(tmp_) != unique_pairs.end())
				continue;
			unique_pairs.insert(tmp_);
			if (DSU_find(x_pos, sets) == DSU_find(y_pos, sets))
				continue;
			DSU_union(x_pos, y_pos, sets);
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