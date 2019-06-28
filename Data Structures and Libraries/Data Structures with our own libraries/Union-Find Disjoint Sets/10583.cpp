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
		if (sets[y_parent].rank == sets[x_parent].rank)
			sets[x_parent].rank++;
	}
	else
		sets[x_parent].parent = y_parent;
}

int main()
{
	ios::sync_with_stdio(0);
	int i, n, m, x, y, tc = 1;
	while (true)
	{
		cin >> n >> m;
		if (!n && !m)
			break;
		DSU sets[n];
		for (i = 0; i < n; i++)
		{
			sets[i].rank = 0;
			sets[i].parent = i;
		}
		for (i = 0; i < m; i++)
		{
			cin >> x >> y;
			DSU_union(x - 1, y - 1, sets);
		}
		set<int> answer;
		for (i = 0; i < n; i++)
			answer.insert(DSU_find(i, sets));
		cout << "Case " << tc++ << ": " << answer.size() << '\n';
	}
	return 0;
}