#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int w, h, n, x1, y1, x2, y2;
	while (true)
	{
		cin >> w >> h >> n;
		// cout << w << ' ' << h << ' ' << n << '\n';
		if (w == 0 && h == 0)
			break;
		int a[w][h], i, j, ans = 0;
		for (i = 0; i < w; i++)
			for (j = 0; j < h; j++)
				a[i][j] = -1;
		while (n--)
		{
			cin >> x1 >> y1 >> x2 >> y2;
			x1--, x2--, y1--, y2--;
			// cout << x1 << ' ' << y1 << '\n';
			// cout << x2 << ' ' << y2 << '\n';
			for (i = min(x1, x2); i <= max(x1, x2); i++)
				for (j = min(y1, y2); j <= max(y1, y2); j++)
					a[i][j] = 1;
		}
		for (i = 0; i < w; i++)
			for (j = 0; j < h; j++)
				ans += (a[i][j] == -1);
		if (!ans)
			cout << "There is no empty spots.\n";
		else if (ans == 1)
			cout << "There is one empty spot.\n";
		else
			cout << "There are " << ans << " empty spots.\n";
	}
	return 0;
}