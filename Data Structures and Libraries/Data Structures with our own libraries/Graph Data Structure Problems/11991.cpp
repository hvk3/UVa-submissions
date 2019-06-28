#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

vector<int> neighbours[1000000];
int main()
{
	ios::sync_with_stdio(0);
	int i, n, m, x, y;
	while (cin >> n >> m)
	{
		for (i = 0; i < 1000000; i++)
			neighbours[i].clear();
		int a[n];
		for (i = 0; i < n; i++)
			cin >> a[i];
		for (i = 0; i < n; i++)
			neighbours[a[i]].push_back(i);
		while (m--)
		{
			cin >> y >> x;
			y--;
			if (y >= neighbours[x].size())
				cout << "0\n";
			else
				cout << neighbours[x][y] + 1 << '\n';
		}
	}
	return 0;
}