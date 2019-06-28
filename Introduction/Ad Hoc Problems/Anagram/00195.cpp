#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

bool comparator(char x, char y)
{
	if (tolower(x) == tolower(y))
		return x < y;
	return tolower(x) < tolower(y);
}

int main()
{
	ios_base::sync_with_stdio(0);
	int i, t;
	string s, nxt;
	cin >> t;
	while (t--)
	{
		cin >> s;
		sort(s.begin(), s.end(), comparator);
		cout << s << '\n';
		while (next_permutation(s.begin(), s.end(), comparator))
		{
			cout << s << '\n';
		}
	}
	return 0;
}

