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
	ll sum = 0;
	cin >> t;
	while (t--)
	{
		string a;
		cin >> a;
		if (a[0] == 'd')
		{
			cin >> x;
			sum += x;
		}
		else
			cout << sum << '\n';
	}
	return 0;
}