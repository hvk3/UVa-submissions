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
	cin >> s;
	int x = 1;
	while (s != "#")
	{
		if (s == "HELLO")
			cout << "Case " << x++ << ": ENGLISH\n";
		else if (s == "HOLA")
			cout << "Case " << x++ << ": SPANISH\n";
		else if (s == "BONJOUR")
			cout << "Case " << x++ << ": FRENCH\n";
		else if (s == "ZDRAVSTVUJTE")
			cout << "Case " << x++ << ": RUSSIAN\n";
		else if (s == "CIAO")
			cout << "Case " << x++ << ": ITALIAN\n";
		else if (s == "HALLO")
			cout << "Case " << x++ << ": GERMAN\n";
		else
			cout << "Case " << x++ << ": UNKNOWN\n";
		cin >> s;
	}
	return 0;
}