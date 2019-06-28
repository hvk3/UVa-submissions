#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int i, n;
	cin >> n;
	string s[n], song[] = {"Happy", "birthday", "to", "you", "Rujia"};
	for (i = 0; i < n; i++)
		cin >> s[i];
	int nb_repetitions = ceil(n * 1.0 / 16);
	for (i = 0; i < 16 * nb_repetitions; i++)
	{
		cout << s[i % n] << ": ";
		if ((i % 16) % 4 == 0)
			cout << song[0] << '\n';
		if ((i % 16) % 4 == 1)
			cout << song[1] << '\n';
		if ((i % 16) % 4 == 2)
			cout << song[2] << '\n';
		if ((i % 16) % 4 == 3)
		{
			if (i % 16 == 11)
				cout << song[4] << '\n';
			else
				cout << song[3] << '\n';
		}
	}
	return 0;
}

