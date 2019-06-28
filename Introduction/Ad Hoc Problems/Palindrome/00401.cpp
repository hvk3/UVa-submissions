#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

bool check_palindrome(string s)
{
	for (int i = 0; i < s.length(); i++)
		if (i <= s.length() - 1 - i)
			if (s[i] != s[s.length() - 1 - i])
				return false;
	return true;
}

bool check_mirrored(string s, map<char, char> mirrored_chars)
{
	for (int i = 0; i < s.length(); i++)
		if (i <= s.length() - 1 - i)
		{
			if (mirrored_chars.find(s[i]) == mirrored_chars.end())
				return false;
			else
				if (s[s.length() - 1 - i] != mirrored_chars[s[i]])
					return false;
		}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(0);
	string s;
	map<char, char> mirrored_chars;
	mirrored_chars['A'] = 'A';
	mirrored_chars['E'] = '3';
	mirrored_chars['H'] = 'H';
	mirrored_chars['I'] = 'I';
	mirrored_chars['J'] = 'L';
	mirrored_chars['L'] = 'J';
	mirrored_chars['M'] = 'M';
	mirrored_chars['O'] = 'O';
	mirrored_chars['S'] = '2';
	mirrored_chars['T'] = 'T';
	mirrored_chars['U'] = 'U';
	mirrored_chars['V'] = 'V';
	mirrored_chars['W'] = 'W';
	mirrored_chars['X'] = 'X';
	mirrored_chars['Y'] = 'Y';
	mirrored_chars['Z'] = '5';
	mirrored_chars['1'] = '1';
	mirrored_chars['2'] = 'S';
	mirrored_chars['3'] = 'E';
	mirrored_chars['5'] = 'Z';
	mirrored_chars['8'] = '8';
	while (cin >> s)
	{
		bool is_palindrome = check_palindrome(s);
		bool is_mirrored = check_mirrored(s, mirrored_chars);
		cout << s << " -- is ";
		if (is_palindrome)
		{
			if (is_mirrored)
				cout << "a mirrored palindrome.";
			else
				cout << "a regular palindrome.";
		}
		else
		{
			if (is_mirrored)
				cout << "a mirrored string.";
			else
				cout << "not a palindrome.";
		}
		cout << "\n\n";
	}
	return 0;
}

