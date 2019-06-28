#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

struct Car
{
	int l, r;
	string name;
};

int main()
{
	ios::sync_with_stdio(0);
	int i, n, t, q;
	cin >> t;
	while (t--)
	{
		cin >> n;
		Car cars[n];
		string ans;
		int query_price, count;
		for (i = 0; i < n; i++)
			cin >> cars[i].name >> cars[i].l >> cars[i].r;
		cin >> q;
		while (q--)
		{
			cin >> query_price;
			count = 0;
			for (i = 0; i < n; i++)
				if (cars[i].l <= query_price and cars[i].r >= query_price)
				{
					count++;
					ans = cars[i].name;
				}
			if (count != 1)
				cout << "UNDETERMINED\n";
			else
				cout << ans << '\n';
		}
		if (t != 0)
			cout << '\n';
	}
	return 0;
}