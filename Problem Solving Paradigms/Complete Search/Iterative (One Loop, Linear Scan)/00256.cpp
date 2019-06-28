#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

vector <int> quirky_squares(int n)
{
	int i, j, lhs, rhs, range = pow(10, n / 2);
	vector <int> results;
	for (i = 0; i < range; i++)
		for (j = 0; j < range; j++)
		{
			lhs = (i + j) * (i + j);
			rhs = (i * range + j);
			if (lhs == rhs)
				results.push_back(lhs);
		}
	return results;
}

int main()
{
	ios::sync_with_stdio(0);
	int i, n;
	vector <int> results[4];
	for (i = 0; i < 4; i++)
		results[i] = quirky_squares((i + 1) * 2);
	while (cin >> n)
	{
		for (auto number : results[n / 2 - 1])
			cout << setfill('0') << setw(n) << number << '\n';
	}
	return 0;
}