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
		int i, n, x, count = 0, temp = 0;
		vector<int> v;
		cin >> n;
		rep(i, 0, n, 1)
		{
			cin >> x;
			v.pb(x);
		}
		rep(i, 0, n - 1, 1)
		{
			if (v[i] < v[i + 1])
				count++;
			else if (v[i] == v[i + 1])
				temp++;
		}
		cout << "Case " << p - t << ": " << count << ' ' << n - 1 - count - temp << '\n';
	}
	return 0;
}