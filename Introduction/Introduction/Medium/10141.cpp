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
	int i, j, n, p, r, count = 1, req;
	string junk, ans, junk2;
	double budget = 0.0, temp = DBL_MAX;
	cin >> n >> p;
	while (n)
	{
		req = -1;
		getline(cin, junk);
		rep(i, 0, n, 1)
			getline(cin, junk);
		rep(i, 0, p, 1)
		{
			getline(cin, junk);
			cin >> budget >> r;
			rep(j, 0, r, 1)
				getline(cin, junk2);
			if (r > req)
			{
				req = r;
				ans = junk;
				temp = budget;
			}
			else if (req == r &&  budget < temp)
				temp = budget, ans = junk;
			getline(cin, junk);
		}
		cout << "RFP #" << count++ << '\n' << ans << '\n';
		cin >> n >> p;
		if (n)
			cout << '\n';
	}
	return 0;
}