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
		int i, n, x, c1 = 0, c2 = 0;
		cin >> n;
		rep(i, 0, n, 1)
		{
			cin >> x;
			c1 += 10 * ceil((x + 1) / 30.0);
			c2 += 15 * ceil((x + 1) / 60.0);
		}
		cout << "Case " << p - t << ": ";
		if (c1 < c2)
			cout << "Mile " << c1 << '\n';
		else if (c1 == c2)
			cout << "Mile Juice " << c1 << '\n';
		else
			cout << "Juice " << c2 << '\n';
	}
	return 0;
}