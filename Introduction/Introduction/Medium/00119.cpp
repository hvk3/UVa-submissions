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
	int n, count = 0;
	while(cin >> n)
	{
		int i, j, num, val;
		string s, s1;
		map <string, int> m;
		vector <string> v;
		rep(i, 0, n, 1)
		{
			cin >> s;
			v.pb(s);
			m[s] = 0;
		}
		rep(i, 0, n, 1)
		{
			cin >> s >> val >> num;
			if (num)
			{
				m[s] -= num * (val / num);
				rep(j, 0, num, 1)
				{
					cin >> s1;
					m[s1] += val / num;
				}
			}
		}
		if (count)
			cout << '\n';
		count++;
		rep(i, 0, n, 1)
			cout << v[i] << ' ' << m[v[i]] << '\n';
	}
	return 0;
}