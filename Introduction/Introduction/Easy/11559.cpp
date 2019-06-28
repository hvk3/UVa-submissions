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
	// ios::sync_with_stdio(0);
	int n, b, h, w, i, j, a, p;
	while (scanf("%d %d %d %d", &n, &b, &h, &w) != EOF)
	{
		int ans = INT_MAX;
		rep(i, 0, h, 1)
		{
			scanf("%d", &p);
			rep(j, 0, w, 1)
			{
				scanf("%d", &a);
				if (a >= n)
					if (n * p <= b && n * p < ans)
						ans = n * p;
			}
		}
		(ans == INT_MAX) ? printf("stay home\n") : printf("%d\n", ans);
	}
	return 0;
}