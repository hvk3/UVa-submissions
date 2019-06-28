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
	int i, j, n, t;
	cin >> t;
	while (t--)
	{
		string s;
		vector<string> dictionary, test_words;
		cin >> n;
		for (i = 0; i < n; i++)
		{
			cin >> s;
			dictionary.push_back(s);
		}
		while (true)
		{
			cin >> s;
			if (s == "END")
				break;
			test_words.push_back(s);
		}
		for (i = 0; i < test_words.size(); i++)
		{
			vector<string> results = check_anagrams(test_words[i], dictionary);
			cout << "Anagrams for: " << test_words[i] << '\n';
			if (results.size() == 0)
				cout << "No anagrams for: " << test_words[i] << '\n';
			else
			{
				for (j = 0; j < results.size(); j++)
					cout << "  " << j + 1 << ") " << results[j] << '\n';
			}

		}
		if (t != 0)
			cout << "\n";
	}
	return 0;
}

