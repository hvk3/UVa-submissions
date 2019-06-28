#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i, n, d, t;
	string s;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		cin >> n;
		map<string, int> m;
		for (i = 0; i < n; i++)
		{
			cin >> s >> d;
			m[s] = d;
		}
		cin >> d >> s;
		cout << "Case " << tc << ": ";
		if (m.find(s) == m.end() || m[s] > d + 5)
			cout << "Do your own homework!\n";
		else if (m[s] > d && m[s] <= d + 5)
			cout << "Late\n";
		else
			cout << "Yesss\n";
	}
	return 0;
}