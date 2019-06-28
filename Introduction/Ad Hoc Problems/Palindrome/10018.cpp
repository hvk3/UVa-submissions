#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

ll reverse(ll x)
{
	ll res = 0;
	while (x > 0)
	{
		res = 10 * res + x % 10;
		x /= 10;
	}
	return res;
}

void min_iterations_till_palindrome(ll x)
{
	int count = 0;
	while (true)
	{
		count++;
		x += reverse(x);
		if (reverse(x) == x || x < 0)
			break;
	}
	cout << count << ' ' << x << '\n';
}

int main()
{
	ios_base::sync_with_stdio(0);
	ll i, n, t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		min_iterations_till_palindrome(n);
	}
	return 0;
}

