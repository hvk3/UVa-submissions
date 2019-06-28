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
	int i, n, count = 1;
	cin >> n;
	while (n)
	{
		int ans = 0, x;
		rep(i, 0, n, 1)
		{
			cin >> x;
			ans += (x ? 1 : -1);
		}
		cout << "Case " << count++ << ": " << ans << '\n';
		cin >> n;
	}
	return 0;
}