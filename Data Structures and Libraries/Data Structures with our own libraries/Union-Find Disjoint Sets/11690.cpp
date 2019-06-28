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
	int x_parent, y_parent;
	x_parent = DSU_find(x, sets);
	y_parent = DSU_find(y, sets);

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
	int i, x, y, n, m, t;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		int a[n];
		DSU sets[n];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			sets[i].parent = i;
			sets[i].rank = 0;
		}
		while (m--)
		{
			cin >> x >> y;
			DSU_union(x, y, sets);
		}
		map<int, int> component_sum;
		for (i = 0; i < n; i++)
			component_sum[DSU_find(i, sets)] += a[i];
		bool possible = true;
		for (auto iter : component_sum)
			if (iter.second != 0)
				possible = false;
		cout << (possible ? "POSSIBLE" : "IMPOSSIBLE") << '\n';
	}
	return 0;
}