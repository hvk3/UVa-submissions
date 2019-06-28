#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

pair<int, int> update(pair<int, int> left, pair<int, int> right)
{
	return make_pair(left.first + right.first, left.second + right.second);
}

int main()
{
	ios::sync_with_stdio(0);
	int m, n;
	while (true)
	{
		cin >> m >> n;
		if (m == 1 and n == 1)
			break;
		pair<int, int> left_most = make_pair(0, 1);
		pair<int, int> right_most = make_pair(1, 0);
		pair<int, int> mid = update(left_most, right_most);
		string path = "";
		ld tmp = m * 1. / n, computed_tmp;
		while (m != mid.first or n != mid.second)
		{
			computed_tmp = mid.first * 1. / mid.second;
			if (computed_tmp > tmp)
			{
				right_most = mid;
				mid = update(left_most, mid);
				path += 'L';
			}
			else if (computed_tmp < tmp)
			{
				left_most = mid;
				mid = update(mid, right_most);
				path += 'R';
			}
		}
		cout << path << '\n';
	}
	return 0;
}