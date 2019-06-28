#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define rep(i, x, y, z) for (i = x; i < y; i += z)
#define repb(i, x, y, z) for (i = x; i > y; i -= z)
#define mp make_pair
#define pb push_back

using namespace std;

int digitSum(int n)
{
	if (n < 10)
		return n;
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return digitSum(sum);
}

int main()
{
	ios::sync_with_stdio(0);
	int n;
	cin >> n;
	while (n)
	{
		cout << digitSum(n) << '\n';
		cin >> n;
	}
	return 0;
}