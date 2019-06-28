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
	int b, n;
	cin >> b >> n;
	while (b)
	{
		int a[100] = {0}, i, x, y, z;
		bool possible = 1;
		rep(i, 0, b, 1)
			cin >> a[i];
		rep(i, 0, n, 1)
		{
			cin >> x >> y >> z;
			a[x - 1] -= z;
			a[y - 1] += z;
		}
		rep(i, 0, b, 1)
			if (a[i] < 0)
				possible = 0;
		cout << (possible ? "S\n" : "N\n");
		cin >> b >> n;
	}
	return 0;
}