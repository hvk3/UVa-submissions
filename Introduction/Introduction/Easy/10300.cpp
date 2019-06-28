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
	while (t--)
	{
		int n, i, x, y, z;
		ll ans = 0;
		cin >> n;
		rep(i, 0, n, 1)
		{
			cin >> x >> y >> z;
			ans += x * z;
		}
		cout << ans << '\n';
	}
	return 0;
}