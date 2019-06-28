#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	string in, tmp;
	vector<string> inputs, results;
	map<string, int> m;
	while (true)
	{
		cin >> in;
		if (in == "#")
			break;
		tmp = in;
		transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
		sort(tmp.begin(), tmp.end());
		m[tmp]++;
		inputs.push_back(in);
	}
	for (auto str : inputs)
	{
		tmp = str;
		transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
		sort(tmp.begin(), tmp.end());
		if (m[tmp] == 1)
			results.push_back(str);
	}
	sort(results.begin(), results.end());
	for (auto str : results)
		cout << str << '\n';
	return 0;
}

