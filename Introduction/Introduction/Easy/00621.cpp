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
		cin >> s;
		if (s == "1" || s == "4" || s == "78")
			cout << "+\n";
		else if(s[s.length() - 2] == '3' && s[s.length() - 1] == '5')
			cout << "-\n";
		else if(s[0] == '9' && s[s.length() - 1] == '4')
			cout << "*\n";
		else
			cout << "?\n";
	}
	return 0;
}