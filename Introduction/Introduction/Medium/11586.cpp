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
	int i, t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin, s);
		int count = 0, x = s.length();
		rep(i, 0, x, 1)
		{
			if (s[i] == 'M')
				count++;
			else if (s[i] == 'F')
				count--;
		}
		cout << ((count == 0 && x >= 3) ? "LOOP\n" : "NO LOOP\n");
	}
	return 0;
}