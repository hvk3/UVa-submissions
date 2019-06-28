#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i, tc = 1, n, q, x;
	while (true)
	{
		cin >> n >> q;
		if (n + q == 0)
			break;
		cout << "CASE# " << tc++ << ":\n";
		int a[n];
		for (i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		while (q--)
		{
			cin >> x;
			auto tmp = lower_bound(a, a + n, x);
			if (tmp == a + n)
				cout << x << " not found\n";
			else
			{
				int pos = tmp - a;
				if (a[pos] != x)
					cout << x << " not found\n";
				else
					cout << x << " found at " << pos + 1 << '\n';
			}
		}
	}
	return 0;
}