#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i, j, n, q, x, q_num = 1;
	while (true)
	{
		cin >> n;
		if (n == 0)
			break;
		int a[n], diff, min_diff, sum_;
		for (i = 0; i < n; i++)
			cin >> a[i];
		cout << "Case " << q_num++ << ":\n";
		cin >> q;
		for (int qn = 1; qn <= q; qn++)
		{
			cin >> x;
			min_diff = INT_MAX;
			for (i = 0; i < n; i++)
			{
				for (j = i + 1; j < n; j++)
				{
					diff = abs(x - (a[i] + a[j]));
					if (min_diff > diff)
					{
						sum_ = a[i] + a[j];
						min_diff = diff;
					}
				}
			}
			cout << "Closest sum to " << x << " is " << sum_ << ".\n";
		}
	}
	return 0;
}