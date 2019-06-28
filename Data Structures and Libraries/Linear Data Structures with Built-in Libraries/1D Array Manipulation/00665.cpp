#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int i, n, m, k, t;
	char weighing_result;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		bool false_coin[n];
		for (i = 0; i < n; i++)
			false_coin[i] = true;
		while (m--)
		{
			cin >> k;
			int left[k], right[k];
			set<int> candidates;
			for (i = 0; i < k; i++)
				cin >> left[i];
			for (i = 0; i < k; i++)
				cin >> right[i];
			cin >> weighing_result;
			if (weighing_result == '=')
			{
				for (i = 0; i < k; i++)
				{
					false_coin[left[i] - 1] = false;
					false_coin[right[i] - 1] = false;
				}
			}
			else
			{
				for (i = 0; i < k; i++)
				{
					candidates.insert(left[i] - 1);
					candidates.insert(right[i] - 1);
				}
				for (i = 0; i < n; i++)
					if (candidates.find(i) == candidates.end())
						false_coin[i] = false;
			}
		}
		int cnt = 0, ans = -1;
		for (i = 0; i < n; i++)
		{
			cnt += false_coin[i];
			if (false_coin[i])
				ans = i + 1;
		}
		// assert(cnt == 1);
		if (cnt == 1)
			cout << ans << '\n';
		else
			cout << "0\n";
		if (t)
			cout << '\n';
	}
	return 0;
}

