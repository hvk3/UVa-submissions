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
		int x, i, n, m1 = INT_MAX, m2 = INT_MIN;
		cin >> n;
		rep(i, 0, n, 1)
		{
			cin >> x;
			m1 = min(m1, x);
			m2 = max(m2, x);
		}
		cout << 2 * (m2 - m1) << '\n';
	}
	return 0;
}