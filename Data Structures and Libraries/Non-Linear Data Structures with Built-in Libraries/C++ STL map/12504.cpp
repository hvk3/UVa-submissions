#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i, j, n, tc;
	cin >> n;
	cin.ignore();
	for (tc = 0; tc < n; tc++)
	{
		map<string, string> m1, m2;
		string s, t, key, value;
		getline(cin, s);
		getline(cin, t);
		for (i = 0; i < s.length(); i++)
		{
			if (s[i] == '{' || s[i] == '}')
				continue;
			key = "", value = "";
			for (j = i; j < s.length(); j++)
			{
				if (s[j] == ':')
					break;
				key += s[j];
			}
			j++;
			while (s[j] != ',' && s[j] != '}')
			{
				value += s[j];
				j++;
			}
			m1[key] = value;
			i = j;
		}
		for (i = 0; i < t.length(); i++)
		{
			if (t[i] == '{' || t[i] == '}')
				continue;
			key = "", value = "";
			for (j = i; j < t.length(); j++)
			{
				if (t[j] == ':')
					break;
				key += t[j];
			}
			j++;
			while (t[j] != ',' && t[j] != '}')
			{
				value += t[j];
				j++;
			}
			m2[key] = value;
			i = j;
		}
		vector<string> added, removed, changed;
		bool match_found;
		for (auto iter1 : m1)
		{
			match_found = false;
			for (auto iter2 : m2)
			{
				match_found |= (iter1.first == iter2.first);
				if (iter1.first == iter2.first)
					key = iter2.first;
			}
			if (!match_found)
				removed.push_back(iter1.first);
			else
				if (iter1.second != m2[key])
					changed.push_back(key);
		}
		for (auto iter2 : m2)
		{
			match_found = false;
			for (auto iter1 : m1)
				match_found |= (iter1.first == iter2.first);
			if (!match_found)
				added.push_back(iter2.first);
		}
		if (added.size() > 0)
		{
			cout << '+';
			for (i = 0; i < added.size(); i++)
			{
				cout << added[i];
				if (i != added.size() - 1)
					cout << ',';
			}
			cout << '\n';
		}
		if (removed.size() > 0)
		{
			cout << '-';
			for (i = 0; i < removed.size(); i++)
			{
				cout << removed[i];
				if (i != removed.size() - 1)
					cout << ',';
			}
			cout << '\n';
		}
		if (changed.size() > 0)
		{
			cout << '*';
			for (i = 0; i < changed.size(); i++)
			{
				cout << changed[i];
				if (i != changed.size() - 1)
					cout << ',';
			}
			cout << '\n';
		}
		if (removed.size() + changed.size() + added.size() == 0)
			cout << "No changes\n";
		cout << '\n';
	}
	return 0;
}