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
	int i, j, g, n;
	string s;
	char tmp;
	while (true)
	{
		cin >> g;
		if (!g)
			break;
		cin >> s;
		string t = "";
		n = s.length();
		int group_size = n / g;
		for (i = 0; i < n;)
		{
			for (j = i + group_size - 1; j >= i; j--)
				t += s[j];
			i += group_size;
		}
		cout << t << '\n';
	}
	return 0;
}