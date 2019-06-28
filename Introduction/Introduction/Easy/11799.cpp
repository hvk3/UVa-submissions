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
	int t, p;
	cin >> t;
	p = t;
	while (t--)
	{
		int i, n, x;
		vector<int> v;
		cin >> n;
		rep(i, 0, n, 1)
		{
			cin >> x;
			v.pb(x);
		}
		sort(v.begin(), v.end());
		cout << "Case " << p - t << ": " << v[n - 1] << '\n';
	}
	return 0;
}