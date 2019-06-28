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
	int t, count = 1;
	cin >> t;
	while (t--)
	{
		int l, h, w;
		cin >> l >> h >> w;
		cout << "Case " << count++ << ": " << ( (l <= 20 && w <= 20 && h <= 20) ? "good\n" : "bad\n");
	}
	return 0;
}