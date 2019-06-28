#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int n;
	while (cin >> n)
	{
		bitset<32> b(n), c;
		for (int j = 0; j < 32; j += 8)
			for (int i = 0; i < 8; i++)
				c[j + i] = b[24 - j + i];
		cout << n << " converts to " << int(c.to_ulong()) << '\n';
	}
	return 0;
}