#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

bool is_palindrome(string s)
{
	for (int i = 0; i < s.length(); i++)
		if (i <= s.length() - 1 - i)
			if(s[i] != s[s.length() - 1 - i])
				return false;
	return true;
}

int main()
{
	ios_base::sync_with_stdio(0);
	string s, t;
	set<string> substrings;
	while (cin >> s)
	{
		substrings.clear();
		int i, j, n = s.length();
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
			{
				t = s.substr(i, j);
				if (t.length() > 0)
					substrings.insert(t);
			}
		substrings.insert(s);
		cout << "The string '" << s << "' contains " << count_if(substrings.begin(), substrings.end(), is_palindrome) << " palindromes.\n";
	}
	return 0;
}

