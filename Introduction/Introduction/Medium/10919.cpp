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
	int i, j, n = -1, m;
	while (n)
	{
		cin >> n;
		if (!n)
			break;
		cin >> m;
		bool flag = true;
		map <string, int> map;
		string s;
		int arr[m];
		mset(i, arr, 0, m);
		rep(i, 0, n, 1)
		{
			cin >> s;
			map[s] = 1;
		}
		rep(i, 0, m, 1)
		{
			int x, y;
			cin >> x >> y;
			rep(j, 0, x, 1)
			{
				cin >> s;
				if (map.count(s) > 0)
					y--;
			}
			if (y > 0)
				flag = false;
		}
		cout << (flag ? "yes\n" : "no\n");
	}
	return 0;
}