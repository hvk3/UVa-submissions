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
	int t;
	cin >> t;
	while (t--)
	{
		int i, n, x = 0, pos;
		cin >> n;
		string s[n];
		rep(i, 0, n, 1)
		{
			cin >> s[i];
			if (s[i] == "SAME")
			{
				cin >> s[i] >> pos;
				s[i] = s[pos - 1];
			}
			// cout << s[i] << '\n';
			if (s[i] == "LEFT")
				x--;
			else if (s[i] == "RIGHT")
				x++;
		}
		cout << x << '\n';
	}
	return 0;
}