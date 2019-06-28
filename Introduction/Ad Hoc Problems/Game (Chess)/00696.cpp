#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define mset(i, a, b, n) for (i = 0; i < n; i++) a[i] = b
#define rep(i, x, y, z) for (i = x; i < y; i += z)
#define repb(i, x, y, z) for (i = x; i > y; i -= z)
#define rep_iter(iter, v) for (iter = v.begin(); iter != v.end(); iter++)
#define mp make_pair
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int m, n;
	while (true)
	{
		cin >> m >> n;
		if (!m && !n)
			break;
		int cnt;
		if (min(m, n) == 1)
			cnt = max(m, n);
		else if (min(m, n) == 2)
			cnt = max(n, m) / 4 * 4 + (max(n, m) % 4 == 1 ? 2 : (max(n, m) % 4 >= 2 ? 4 : 0));
		else
			cnt = (n * m + 1) / 2;
		cout << cnt << " knights may be placed on a " << m << " row " << n << " column board.\n";
	}
	return 0;
}