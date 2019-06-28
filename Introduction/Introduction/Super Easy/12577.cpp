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
	cin >> s;
	while (s != "*")
	{
		cout << "Case " << count++ << ": Hajj-e-" << (s == "Hajj" ? "Akbar\n" : "Asghar\n");
		cin >> s;
	}
	return 0;
}