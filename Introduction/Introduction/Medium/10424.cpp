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
	string s1, s2;
	while (getline(cin, s1))
	{
		getline(cin, s2);
		double res = 0.0;
		int c1 = 0, c2 = 0, i, l1 = s1.length(), l2 = s2.length();
		rep(i, 0, l1, 1)
		{
			if (islower(s1[i]))
				c1 += (s1[i] - 'a' + 1);
			else if (isupper(s1[i]))
				c1 += (s1[i] - 'A' + 1);
		}
		rep(i, 0, l2, 1)
		{
			if (islower(s2[i]))
				c2 += (s2[i] - 'a' + 1);
			else if (isupper(s2[i]))
				c2 += (s2[i] - 'A' + 1);
		}
		c1 %= 9, c2 %= 9;
		if (!c1)
			c1 = 9;
		if (!c2)
			c2 = 9;
		if (c1 >= c2)
			res = (c2 / (c1 * 1.0));
		else
			res = (c1 / (c2 * 1.0));
		printf("%0.2f %%\n", res * 100.0);
	}
	return 0;
}