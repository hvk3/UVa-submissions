#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

bool check(ll tmp)
{
	int i, freq[10];
	for(i = 0; i < 10; i++)
		freq[i] = 0;
	while (tmp > 0)
	{
		freq[tmp % 10]++;
		tmp /= 10;
	}
	for (i = 0; i < 10; i++)
		if (freq[i] > 1)
			return false;
	return true;
}

int main()
{
	ios::sync_with_stdio(0);
	ll i, n, t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		ll mx = 9876543210ll, tmp;
		for (i = 1; i * n <= mx; i++)
		{
			tmp = i * n;
			if (check(tmp) and check(i))
				cout << tmp << " / " << i << " = " << n << '\n';
		}
		if (t != 0)
			cout << '\n';
	}
	return 0;
}