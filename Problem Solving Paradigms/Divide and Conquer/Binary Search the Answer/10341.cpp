#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int p, q, r, s, t, u, iterations = 100, i;
	while (cin >> p >> q >> r >> s >> t >> u)
	{
		ld x_min = 0.0, x_max = 1.0, x_mid, eps = 1e-12, res;
		i = 0;
		while (abs(x_min - x_max) > eps and i < iterations)
		{
			x_mid = (x_max + x_min) / 2.0;
			res = p * exp(-x_mid);
			res += q * sin(x_mid);
			res += r * cos(x_mid);
			res += s * tan(x_mid);
			res += t * x_mid * x_mid;
			res += u;
			if (abs(res) < eps)
				break;
			if (res > eps)
				x_min = x_mid;
			else
				x_max = x_mid;
			i++;
			// cerr << i << ' ' << res << '\n';
		}
		res = p * exp(-x_mid);
		res += q * sin(x_mid);
		res += r * cos(x_mid);
		res += s * tan(x_mid);
		res += t * x_mid * x_mid;
		res += u;
		if (abs(res) / eps < 1e6)
			cout << fixed << setprecision(4) << round(x_mid * 10000.) / 10000.  << '\n';
		else
			cout << "No solution\n";
	}
	return 0;
}