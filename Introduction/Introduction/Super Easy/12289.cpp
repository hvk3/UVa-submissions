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
		string s;
		int count = 0;
		cin >> s;
		if (s.length () > 3)
			cout << "3\n";
		else
		{
			if (s[0] == 'o')
				count++;
			if (s[1] == 'n')
				count++;
			if (s[2] == 'e')
				count++;
			cout << (count >= 2 ? 1 : 2) << '\n';
		}
	}
	return 0;
}