#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

string transform(string s)
{
	string t = "";
	for (int i = 0; i < s.length(); i++)
		if (s[i] != ' ')
			t += s[i];
	sort(t.begin(), t.end());
	return t;
}

int main()
{
	ios_base::sync_with_stdio(0);
	int i, j, t;
	string s;
	cin >> t;
	cin.ignore();
	getline(cin, s);
	string separator = "";
	while (t--)
	{
		vector <pair<string, string> > anagrams;
		while (true)
		{
			getline(cin, s);
			if (s.length() == 0 || s == "\n")
				break;
			anagrams.push_back(make_pair(s, transform(s)));
		}
		cout << separator;
		separator = "\n";
		sort(anagrams.begin(), anagrams.end());
		for (i = 0; i < anagrams.size(); i++)
			for (j = i + 1; j < anagrams.size(); j++)
				if (anagrams[i].second == anagrams[j].second)
					cout << anagrams[i].first << " = " << anagrams[j].first << '\n';
	}
	return 0;
}

