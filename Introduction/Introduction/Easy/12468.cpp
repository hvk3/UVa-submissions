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
	int a, b;
	cin >> a >> b;
	while (a != -1)
	{
		if (a < b)
			cout << min(b - a, (a - b + 100) % 100) << '\n';
		else if (a == b)
			cout << "0\n";
		else
			cout << min(a - b, (b - a + 100) % 100) << '\n';
		cin >> a >> b;
	}
	return 0;
}