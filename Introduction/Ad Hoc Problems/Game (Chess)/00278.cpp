#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int x, y, t;
	char piece;
	cin >> t;
	while (t--)
	{
		cin >> piece >> x >> y;
		if (piece == 'Q' or piece == 'r')
			cout << min(x, y) << '\n';
		else if (piece == 'k')
			cout << x * y / 2 << '\n';
		else
			cout << ((x + 1) / 2) * ((y + 1) / 2) << '\n';
	}
	return 0;
}

