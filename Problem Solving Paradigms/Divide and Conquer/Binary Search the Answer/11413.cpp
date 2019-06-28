#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i, j, n, m;
	while (cin >> n >> m)
	{
		int a[n], sum_[n];
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			sum_[i] = a[i] + (i > 0 ? sum_[i - 1] : 0);
		}
		int l = *max_element(a, a + n), r = sum_[n - 1], mid;
		int final_vessel_capacity = -1, vessel_capacity, vessels_used;
		while (l <= r)
		{
			mid = (l + r) / 2;
			i = 0, vessels_used = 0;
			while (i < n)
			{
				vessel_capacity = 0;
				for (j = i; j < n; j++)
				{
					if (a[j] + vessel_capacity <= mid)
						vessel_capacity += a[j];
					else
						break;
				}
				i = j + (i == j);
				vessels_used++;
			}
			if (vessels_used < m)
				r = mid - 1;
			else
			{
				if (vessels_used > m)
					l = mid + 1;
				else
				{
					final_vessel_capacity = mid;
					r = mid - 1;
				}
			}
		}
		if (final_vessel_capacity == -1)
			final_vessel_capacity = *max_element(a, a + n);
		cout << final_vessel_capacity << '\n';
	}
	return 0;
}