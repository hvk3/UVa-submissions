#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int i, l;
	while (cin >> l)
	{
		if (!l)
			break;
		string s;
		cin >> s;
		int r_pos = -1, d_pos = -1, z_pos = -1, ans = INT_MAX;
		for (i = 0; i < s.length(); i++)
		{
			if (s[i] == 'Z')
				ans = 0;
			if (s[i] == 'R')
			{
				r_pos = i;
				if (d_pos != -1)
					ans = min(ans, abs(i - d_pos));
			}
			if (s[i] == 'D')
			{
				d_pos = i;
				if (r_pos != -1)
					ans = min(ans, abs(i - r_pos));
			}
		}
		cout << ans << '\n';
	}
	return 0;
}

