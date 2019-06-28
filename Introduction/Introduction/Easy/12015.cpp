#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define rep(i, x, y, z) for (i = x; i < y; i += z)
#define repb(i, x, y, z) for (i = x; i > y; i -= z)
#define mp make_pair
#define pb push_back

using namespace std;

int comparator(pair<string, int>a , pair<string, int> b)
{
	return a.second > b.second;
}

int main()
{
	ios::sync_with_stdio(0);
	int i, t, x, q;
	string s;
	cin >> t;
	q = t;
	while (t--)
	{
		cout << "Case #" << q - t << ":\n";
		pair<string, int> p[10];
		rep(i, 0, 10, 1)
		{
			cin >> s >> x;
			p[i] = mp(s, x);
		}
		sort(p, p + 10, comparator);
		x = p[0].second;
		rep(i, 0, 10, 1)
			if (p[i].second == x)
				cout << p[i].first << '\n';
	}
	return 0;
}