#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	string s, t_;
	int i, n, tc, t;
	cin >> t;
	getline(cin, s);
	for (tc = 1; tc <= t; tc++)
	{
		getline(cin, s);
		t_ = "";
		n = s.length();
		for (i = 0; i < n; i++)
			if (isalpha(s[i]))
				t_ += s[i];
		transform(t_.begin(), t_.end(), t_.begin(), ::tolower);
		bool is_palindrome = true;
		for (i = 0; i < t_.length(); i++)
			if (i <= t_.length() - 1 - i)
				if (t_[i] != t_[t_.length() - 1 - i])
					is_palindrome = false;
		cout << "Case #" << tc << ":\n";
		if (is_palindrome && sqrt(t_.length()) == int(sqrt(t_.length())))
			cout << int(sqrt(t_.length())) << '\n';
		else
			cout << "No magic :(\n";
	}
	return 0;
}

