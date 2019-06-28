#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i, n, q, x;
	cin >> n;
	int a[n];
	for (i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	cin >> q;
	while (q--)
	{
		cin >> x;
		auto p1 = upper_bound(a, a + n, x);
		auto p2 = lower_bound(a, a + n, x);
		if (p2 != a + n and p2 != a)
			cout << a[p2 - a - 1] << ' ';
		else if (p2 == a)
		{
			if (a[0] < x)
				cout << a[0] << ' ';
			else
				cout << "X ";
		}
		else
			cout << "X ";
		if (p1 != a + n)
			cout << a[p1 - a] << '\n';
		else
			cout << "X\n";
	}
	return 0;
}