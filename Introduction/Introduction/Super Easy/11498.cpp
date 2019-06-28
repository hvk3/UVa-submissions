#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define rep(i, x, y, z) for (i = x; i < y; i += z)
#define repb(i, x, y, z) for (i = x; i > y; i -= z)
#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int t;
	cin >> t;
	while (t)
	{
		int i, x, y, n, m;
		cin >> x >> y;
		rep(i, 0, t, 1)
		{
			cin >> n >> m;
			if (n == x || y == m)
				cout << "divisa\n";
			else if (n < x && y < m)
				cout << "NO\n";
			else if (n > x && y < m)
				cout << "NE\n";
			else if (n > x && y > m)
				cout << "SE\n";
			else
				cout << "SO\n";
		}
		cin >> t;
	}
	return 0;
}