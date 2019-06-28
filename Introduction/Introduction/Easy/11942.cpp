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
	ios::sync_with_stdio(0);
	int t;
	cin >> t;
	cout << "Lumberjacks:\n";
	while (t--)
	{
		int a[10], i, flag = 0;
		rep(i, 0, 10, 1)
			cin >> a[i];
		rep(i, 0, 9, 1)
			if (a[i] <= a[i + 1])
				flag++;
		if (flag == 9)
		{
			cout << "Ordered\n";
			continue;
		}
		flag = 0;
		rep(i, 0, 9, 1)
			if (a[i] >= a[i + 1])
				flag++;
		if (flag == 9)
			cout << "Ordered\n";
		else
			cout << "Unordered\n";
	}
	return 0;
}