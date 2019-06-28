#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int i, n, m;
	while (true)
	{
		cin >> n;
		if (!n)
			break;
		cin >> m;
		int a[m], ans = 0, prev = 0, cut = 0;
		for (i = 0; i < m; i++)
		{
			cin >> a[i];
			if (i == 0)
				cut = n - a[i];
			else if (a[i] < prev)
				cut += prev - a[i];
			prev = a[i];
		}
		cout << cut << '\n';
	}
	return 0;
}

