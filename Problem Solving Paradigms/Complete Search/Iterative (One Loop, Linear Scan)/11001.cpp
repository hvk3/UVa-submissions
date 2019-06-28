#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i;
	ld V_total, V_0;
	while (true)
	{
		cin >> V_total >> V_0;
		if (!V_0 and !V_total)
			break;
		else
		{
			int pieces, mx_pieces = -1;
			ld diam, mx = 0, tmp;
			bool duplicate_found = false;
			for (i = 1; i <= V_total; i++)
			{
				pieces = i;
				tmp = V_total / pieces;
				if (tmp <= V_0)
					continue;
				tmp -= V_0;
				diam = 0.3 * sqrt(tmp);
				// cout << i << ' ' << mx << ' ' << diam * pieces << '\n';
				if (diam * pieces - mx > 1e-12)
				{
					mx = diam * pieces;
					mx_pieces = pieces;
				}
				else if (abs(diam * pieces - mx) <= 1e-12)
					duplicate_found = true;
			}
			if (mx_pieces == -1)
				mx_pieces = 0;
			cout << (duplicate_found ? 0 : mx_pieces) << '\n';
		}
	}
	return 0;
}