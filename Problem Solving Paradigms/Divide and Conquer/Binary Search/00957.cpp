#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i, j, y, n;
	while (cin >> y)
	{
		cin >> n;
		int a[n], cnt, max_cnt = -1, start, end, pos = -1;
		for (i = 0; i < n; i++)
			cin >> a[i];
		for (i = 0; i < n; i++)
		{
			start = i;
			auto tmp = upper_bound(a, a + n, a[i] + y - 1);
			if (tmp != a + n)
				end = int(tmp - a) - 1;
			else
				end = n - 1;
			cnt = end - start + 1;
			// cerr << cnt << ' ' << start << ' ' << end << ' ';
			// cerr << a[start] << ' ' << a[end] << '\n';
			if (max_cnt < cnt)
			{
				pos = i;
				max_cnt = cnt;
			}
		}
		cout << max_cnt << ' ' << a[pos] << ' ' << a[pos + max_cnt - 1] << '\n';
	}
	return 0;
}