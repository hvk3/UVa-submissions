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
	int i, n, m, c, x, count = 1;
	cin >> n >> m >> c;
	while (n && m && c)
	{
		int sum = 0, consumption[n], ans = INT_MIN;
		bool status[n], flag = false;
		rep(i, 0, n, 1)
		{
			cin >> consumption[i];
			status[i] = false;
		}
		rep(i, 0, m, 1)
		{
			cin >> x;
			status[x - 1] ^= true;
			if (!status[x - 1])
				sum -= consumption[x - 1];
			else
				sum += consumption[x - 1];
			if (sum > c)
				flag = true;
			else
				ans = max(ans, sum);
		}
		cout << "Sequence " << count++ << '\n';
		if (flag)
			cout << "Fuse was blown.\n\n";
		else
			cout << "Fuse was not blown.\nMaximal power consumption was " << ans << " amperes.\n\n";
		cin >> n >> m >> c;
	}
	return 0;
}