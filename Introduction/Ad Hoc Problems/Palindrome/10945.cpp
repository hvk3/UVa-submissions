#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	string s, t;
	int i, n;
	while (true)
	{
		getline(cin, s);
		if (s == "DONE")
		{
			cerr << "BREAKING!\n";
			break;
		}
		t = "";
		n = s.length();
		for (i = 0; i < n; i++)
			if (isalpha(s[i]))
				t += s[i];
		transform(t.begin(), t.end(), t.begin(), ::tolower);
		bool is_palindrome = true;
		for (i = 0; i < t.length(); i++)
			if (i <= t.length() - 1 - i)
				if (t[i] != t[t.length() - 1 - i])
					is_palindrome = false;
		cout << (is_palindrome ? "You won't be eaten!\n" : "Uh oh..\n");
	}
	return 0;
}

