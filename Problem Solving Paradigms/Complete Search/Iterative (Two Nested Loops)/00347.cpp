#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

string increment(string s)
{
	int carry = 1, i, n = s.length(), tmp;
	for (i = n - 1; i >= 0; i--)
	{
		tmp = s[i] -'0';
		if (carry == 0)
			break;
		tmp += carry;
		carry = tmp / 10;
		tmp %= 10;
		s[i] = tmp + '0';
	}
	if (carry > 0)
		s = '1' + s;
	return s;
}

bool check(string s)
{
	int i, n = s.length(), digit_count[10] = {0};
	int marked[n];
	for (i = 0; i < n; i++)
	{
		marked[i] = -1;
		digit_count[s[i] - '0']++;
		if (digit_count[s[i] - '0'] > 1)
			return false;
	}
	i = 0;
	while (true)
	{
		if (marked[i] != -1)
		{
			if (i != 0)
				marked[i] = -1;
			break;
		}
		marked[i] = true;
		i = (i + s[i] - '0') % n;
	}
	for (i = 0; i < n; i++)
		if (marked[i] == -1)
			return false;
	return true;
}

int main()
{
	ios::sync_with_stdio(0);
	int i, n, tc = 1;
	string s;
	while (true)
	{
		cin >> s;
		if (s == "0")
			break;
		while (!check(s))
			s = increment(s);
		cout << "Case " << tc++ << ": " << s << '\n';
	}
	return 0;
}