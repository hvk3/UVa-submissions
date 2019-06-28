#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

vector<string> check_anagrams(string test, vector<string> dictionary)
{
	vector<string> results;
	string test_ = test, tmp;
	sort(test_.begin(), test_.end());
	for (int i = 0; i < dictionary.size(); i++)
	{
		tmp = dictionary[i];
		sort(tmp.begin(), tmp.end());
		if (tmp == test_)
			results.push_back(dictionary[i]);
	}
	return results;
}

int main()
{
	ios_base::sync_with_stdio(0);
	string s;
	vector<string> dictionary;
	while (true)
	{
		cin >> s;
		if (s == "XXXXXX")
			break;
		dictionary.push_back(s);
	}
	while (true)
	{
		cin >> s;
		if (s == "XXXXXX")
			break;
		vector<string> results = check_anagrams(s, dictionary);
		if (results.size() == 0)
			cout << "NOT A VALID WORD\n";
		else
		{
			sort(results.begin(), results.end());
			for (auto str : results)
				cout << str << '\n';
		}
		cout << "******\n";
	}
	return 0;
}

