#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

string next_perm(string s)
{
	int i, j, n = s.length(), pos;
	char tmp;
	bool swapped = false;
	for (i = n - 2; i >= 0; i--)
	{
		if (s[i] < s[i + 1])
			for (j = n - 1; j >= 0; j--)
			{
				if (s[i] < s[j] && !swapped)
				{
					tmp = s[i];
					s[i] = s[j];
					s[j] = tmp;
					swapped = true;
					pos = i + 1;
				}
			}
	}
	if (swapped)
		sort(s.begin() + pos, s.end());
	return s;
}

int main()
{
	ios::sync_with_stdio(0);
	int i, n;
	string s, t;
	while (true)
	{
		cin >> s;
		if (s == "#")
			break;
		t = next_perm(s);
		cout << (t == s ? "No Successor" : t) << '\n';
	}
	return 0;
}