#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i, j, k;
	while (cin >> k)
	{
		vector < pair <int, int> > pairs;
		for (i = 1 + k; i <= 2 * k; i++)
			if (i * k % (i - k) == 0)
				pairs.push_back(make_pair(max(i, (i * k) / (i - k)), min(i, (i * k) / (i - k))));
		cout << pairs.size() << '\n';
		for (auto p : pairs)
			cout << "1/" << k << " = 1/" << p.first << " + 1/" << p.second << '\n';
	}
	return 0;
}