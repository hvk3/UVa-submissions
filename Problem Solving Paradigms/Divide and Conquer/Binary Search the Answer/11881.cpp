#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

ld fastexp(ld x, ll n)
{
	ld res = 1.;
	while (n > 0)
	{
		if (n & 1)
			res *= x;
		n >>= 1;
		x *= x;
	}
	return res;
}

int main()
{
	ios::sync_with_stdio(0);
	int i, t;
	while (true)
	{
		cin >> t;
		if (!t)
			break;
		int a[t + 1], iterations = 100;
		for (i = 0; i < t + 1; i++)
			cin >> a[i];
		ld l = -1, r = 100., mid, eps = 1e-12, NPV;
		while (l <= r)
		{
			mid = (l + r) / 2.;
			NPV = a[0];
			for (i = 1; i < t + 1; i++)
				NPV += a[i] / pow(1 + mid, i);
			if (abs(NPV) < eps)
			{
				cout << fixed << setprecision(2) << mid << '\n';
				break;
			}
			if (NPV > 0)
				l = mid;
			else
				r = mid;
		}
	}
	return 0;
}