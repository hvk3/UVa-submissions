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
	int i, x, count = 0;
	while (getline(cin, s))
	{
		x = s.length();
		rep(i, 0, x, 1)
		{
			if (s[i] == '\"')
			{
				cout << (!(count & 1) ? "``" : "\'\'");
				count++;
			}
			else
				cout << s[i];
		}
		cout << '\n';
	}
	return 0;
}