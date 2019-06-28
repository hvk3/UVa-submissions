#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i, n, q;
	cin >> n;
	map<string, string> m;
	string slogan, response;
	cin.ignore();
	for (i = 0; i < n; i++)
	{
		getline(cin, slogan);
		getline(cin, response);
		m[slogan] = response;
	}
	cin >> q;
	cin.ignore();
	for (i = 0; i < q; i++)
	{
		getline(cin, slogan);
		cout << m[slogan] << '\n';
	}
	return 0;
}