#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i, m, n, x;
	while (true)
	{
		cin >> n >> m;
		if (!n && !m)
			break;
		set<int> s;
		int cnt = 0;
		for (i = 0; i < n; i++)
		{
			cin >> x;
			s.insert(x);
		}
		for (i = 0; i < m; i++)
		{
			cin >> x;
			cnt += (s.find(x) != s.end());
		}
		cout << cnt << '\n';
	}
	return 0;
}