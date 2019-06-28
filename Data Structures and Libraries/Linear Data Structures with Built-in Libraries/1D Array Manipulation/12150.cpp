#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define mset(i, a, b, n) for (i = 0; i < n; i++) a[i] = b
#define rep(i, x, y, z) for (i = x; i < y; i += z)
#define repb(i, x, y, z) for (i = x; i > y; i -= z)
#define rep_iter(iter, v) for (iter = v.begin(); iter != v.end(); iter++)
#define mp make_pair
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i, n, x, y;
	while (true)
	{
		cin >> n;
		if (!n)
			break;
		int marked[n];
		mset(i, marked, -1, n);
		bool possible = true;
		for (i = 0; i < n; i++)
		{
			cin >> x >> y;
			if (y >= 0 && y < n)
				marked[i + y] = x;
			else if (y < 0 && abs(y) < n)
				marked[i + y] = x;
		}
		// for (i = 0; i < n; i++)
		// 	cout << marked[i] << ' ';
		// cout << '\n';
		for (i = 0; i < n; i++)
			possible &= (marked[i] != -1);
		if (!possible)
			cout << "-1\n";
		else
		{
			for (i = 0; i < n; i++)
			{
				cout << marked[i];
				if (i != n - 1)
					cout << ' ';
			}
			cout << '\n';
		}
	}
	return 0;
}