#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

pair<ll, ll> get_mediant(ll a, ll c, ll b, ll d)
{
	return make_pair(a + b, c + d);
}

int main()
{
	ios::sync_with_stdio(0);
	ll i, n, a, b, c, d;
	string s;
	cin >> n;
	while (n--)
	{
		cin >> s;
		a = 0, c = 1; 
		b = 1, d = 0;
		// initial fractions are a / c and b / d
		pair<ll, ll> mediant;
		for (i = 0; i < s.length(); i++)
		{
			mediant = get_mediant(a, c, b, d);
			if (s[i] == 'L')
				b = mediant.first, d = mediant.second;
			else
				a = mediant.first, c = mediant.second;
		}
		mediant = get_mediant(a, c, b, d);
		cout << mediant.first << '/' << mediant.second << '\n';
	}
	return 0;
}