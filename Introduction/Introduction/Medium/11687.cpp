#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

string int_to_string(int x)
{
	string res = "";
	while (x > 0)
	{
		res += x % 10 + '0';
		x /= 10;
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(0);
	string s, t;
	int i, n;
	while (true)
	{
		cin >> s;
		if (s == "END")
			break;
		n = s.length();
		i = 1;
		while (n != 1)
		{
			t = int_to_string(n);
			i++;
			n = t.length();
		}
		if (s == "1")
			cout << "1\n";
		else
			cout << i + 1 << '\n';
	}
	return 0;
}

