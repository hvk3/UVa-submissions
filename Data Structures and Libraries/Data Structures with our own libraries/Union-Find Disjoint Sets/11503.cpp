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
	int i, j, n, t;
	string x, y;
	cin >> t;
	while (t--)
	{
		cin >> n;
		DSU sets[100010];
		for (i = 0; i < 100010; i++)
		{
			sets[i].rank = 0;
			sets[i].size = 1;
			sets[i].parent = i;
		}
		map<string, int> positions;
		j = 0;
		int x_pos, y_pos;
		for (i = 0; i < n; i++)
		{
			cin >> x >> y;
			if (positions.find(x) == positions.end())
				x_pos = positions[x] = j++;
			else
				x_pos = positions[x];
			if (positions.find(y) == positions.end())
				y_pos = positions[y] = j++;
			else
				y_pos = positions[y];
			if (DSU_find(x_pos, sets) != DSU_find(y_pos, sets))
				DSU_union(x_pos, y_pos, sets);
			cout << sets[DSU_find(x_pos, sets)].size << '\n';
		}
	}
	return 0;
}