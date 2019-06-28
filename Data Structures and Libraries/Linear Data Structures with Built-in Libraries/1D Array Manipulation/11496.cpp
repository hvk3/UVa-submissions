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
	int i, n;
	while (true)
	{
		cin >> n;
		if (!n)
			break;
		int a[n], cnt = 0;
		for (i = 0; i < n; i++)
			cin >> a[i];
		for (i = 0; i < n; i++)
			cnt += (a[i] > a[(i + 1) % n] && a[i] > a[(i - 1 + n) % n]);
		cout << cnt * 2 << '\n';
	}
	return 0;
}