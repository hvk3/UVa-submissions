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
	string s;
	int count = 1;
	while (cin >> s)
	{
		cout << "Case " << count++ << ":\n";
		int i, j, n, len = s.length(), x, y, flag;
		cin >> n;
		rep(i, 0, n, 1)
		{
			flag = 0;
			cin >> x >> y;
			if (x > y)
			{
				int temp = x;
				x = y;
				y = temp;
			}
			rep(j, x, y, 1)
				if (s[j] != s[j + 1])
					flag = 1;
			cout << (flag ? "No\n" : "Yes\n");
		}
	}
	return 0;
}