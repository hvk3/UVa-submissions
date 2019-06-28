#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

struct DSU
{
	int parent, rank;
};

int DSUfind(int x, DSU sets[])
{
	if (sets[x].parent != x)
		sets[x].parent = DSUfind(sets[x].parent, sets);
	return sets[x].parent;
}

void DSUunion(int x, int y, DSU sets[])
{
	int x_parent = DSUfind(x, sets);
	int y_parent = DSUfind(y, sets);

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
	int i, t, x, y, n;
	string s;
	cin >> t;
	map<char, int> alphabet;
	for (i = 0; i < 26; i++)
		alphabet['A' + i] = i;
	while (t--)
	{
		vector< pair<int, int> > edges;
		set<int> vertices;
		while (true)
		{
			cin >> s;
			if (s[0] == '*')
				break;
			x = alphabet[s[1]];
			y = alphabet[s[s.length() - 2]];
			edges.push_back(make_pair(x, y));
		}
		cin >> s;
		for (i = 0; i < s.length(); i++)
			if (isalpha(s[i]))
				vertices.insert(alphabet[s[i]]);
		DSU sets[26];
		for (auto vertex : vertices)
		{
			DSU tmp;
			tmp.rank = 0;
			tmp.parent = vertex;
			sets[vertex] = tmp;
		}
		for (auto edge : edges)
			DSUunion(edge.first, edge.second, sets);
		map<int, int> vertex_component;
		for (auto vertex : vertices)
			vertex_component[DSUfind(vertex, sets)]++;
		int trees = 0, acorns = 0;
		for (auto iter : vertex_component)
		{
			trees += (iter.second > 1);
			acorns += (iter.second == 1);
		}
		cout << "There are " << trees << " tree(s) and " << acorns << " acorn(s).\n";
	}
	return 0;
}