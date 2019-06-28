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
	int t, x;
	cin >> t;
	x = t;
	while (t--)
	{
		int a[3], i;
		rep(i, 0, 3, 1)
			cin >> a[i];
		sort(a, a + 3);
		cout << "Case " << x - t << ": " << a[1] << '\n';
	}
	return 0;
}