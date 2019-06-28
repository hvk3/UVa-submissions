#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i, j, c[3], g[3], b[3];
	while (cin >> b[0] >> g[0] >> c[0] >> b[1] >> g[1] >> c[1] >> b[2] >> g[2] >> c[2])
	{
		int total_g, total_b, total_c, mn = INT_MAX, cost;
		string combinations[] = {"BCG", "BGC", "CBG", "CGB", "GCB", "GBC"};
		string ans = "";
		for (i = 0; i < 6; i++)
		{
			cost = 0;
			if (combinations[i] == "BCG")
			{
				cost += b[1] + b[2];
				cost += c[0] + c[2];
				cost += g[0] + g[1];
			}
			else if (combinations[i] == "BGC")
			{
				cost += b[1] + b[2];
				cost += g[0] + g[2];
				cost += c[0] + c[1];
			}
			else if (combinations[i] == "CBG")
			{
				cost += b[0] + b[2];
				cost += c[1] + c[2];
				cost += g[0] + g[1];
			}
			else if (combinations[i] == "CGB")
			{
				cost += b[0] + b[1];
				cost += c[1] + c[2];
				cost += g[0] + g[2];
			}
			else if (combinations[i] == "GBC")
			{
				cost += b[0] + b[2];
				cost += c[0] + c[1];
				cost += g[2] + g[1];
			}
			else if (combinations[i] == "GCB")
			{
				cost += b[1] + b[0];
				cost += c[0] + c[2];
				cost += g[2] + g[1];
			}
			if (cost <= mn)
			{
				if (mn == cost)
				{
					if (ans.compare(combinations[i]) > 0)
						ans = combinations[i];
				}
				else
					ans = combinations[i];
				mn = cost;
			}
		}
		cout << ans << ' ' << mn << '\n';
	}
	return 0;
}