#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i, n, sum_;
	while (cin >> n)
	{
		int a[n];
		unordered_map<int, int> freq;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			freq[a[i]]++;
		}
		cin >> sum_;
		sort(a, a + n);
		int diff, min_diff = INT_MAX, c1, c2;
		for (i = 0; i < n; i++)
		{
			auto tmp = lower_bound(a, a + n, sum_ - a[i]);
			if (tmp == a + n)
				continue;
			else
			{
				int pos = tmp - a;
				if (a[pos] + a[i] != sum_)
					continue;
				if (a[i] == a[pos] and freq[a[i]] == 1)
					continue;
				diff = abs(a[pos] - a[i]);
				if (min_diff > diff)
				{
					min_diff = diff;
					c1 = a[i], c2 = a[pos];
				}
			}
		}
		cout << "Peter should buy books whose prices are " << c1 << " and " << c2 << ".\n\n";
	}
	return 0;
}