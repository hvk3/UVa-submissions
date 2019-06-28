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
	int x, y, z, w, ans;
	while (scanf("%d %d %d %d", &x, &y, &z, &w), x || y || z || w)
	{
		ans = 1080;
		ans += (x > y ? 9 * (x - y) : 9 * (x - y + 40));
		ans += (z > y ? 9 * (z - y) : 9 * (z - y + 40));
		ans += (z > w ? 9 * (z - w) : 9 * (z - w + 40));
		cout << ans << '\n';
	}
	return 0;
}