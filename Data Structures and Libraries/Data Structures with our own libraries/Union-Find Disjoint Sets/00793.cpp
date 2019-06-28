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
	if (sets[x].parent != x)
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
	int i, n, t, x, y;
	string s;
	char q;
	scanf("%d", &t);
	while (t--)
	{
		scanf("\n%d\n", &n);
		DSU sets[n];
		for (i = 0; i < n; i++)
		{
			sets[i].parent = i;
			sets[i].rank = 0;
		}
		int answered = 0, unanswered = 0;
		while (true)
		{
			if(!getline(cin, s) || s.empty())
				break;
			sscanf(s.c_str(), "%c %d %d", &q, &x, &y);
			// cout << q << ' ' << x << ' ' << y << '\n';
			if (q == 'c')
			{
				DSU_union(x - 1, y - 1, sets);
			}
			else
			{
				int x_parent = DSU_find(x - 1, sets);
				int y_parent = DSU_find(y - 1, sets);
				if (x_parent == y_parent)
					answered++;
				else
					unanswered++;
			}
		}
		printf("%d,%d\n", answered, unanswered);
		if (t != 0)
			cout << '\n';
	}
	return 0;
}