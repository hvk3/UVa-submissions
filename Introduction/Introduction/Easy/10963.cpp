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
		int n, i, x, y, diff = 0, temp, flag = 0;
		cin >> n;
		rep(i, 0, n, 1)
		{
			cin >> x >> y;
			if (!i)
				diff = abs(x - y);
			else
			{
				temp = abs(x - y);
				if (diff != temp)
					flag = 1;
			}
		}
		cout << (flag ? "no\n": "yes\n");
		if (t)
			cout << '\n';
	}
	return 0;
}