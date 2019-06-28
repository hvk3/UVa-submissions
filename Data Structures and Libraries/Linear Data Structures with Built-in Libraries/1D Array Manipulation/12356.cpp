#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define mset(i, a, b, n) for (i = 0; i < n; i++) a[i] = b
#define rep(i, x, y, z) for (i = x; i < y; i += z)
#define repb(i, x, y, z) for (i = x; i > y; i -= z)
#define rep_iter(iter, v) for (iter = v.begin(); iter != v.end(); iter++)
#define mp make_pair
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int s, b, i, j, x, y;
	while (true)
	{
		cin >> s >> b;
		if (!s && !b)
			break;
		int a[s + 10], left[s + 10], right[s + 10];
		bool left_done, right_done;
		for (i = 1; i <= s; i++)
		{
			a[i] = 1;
			left[i] = (i > 1 ? i - 1 : -1);
			right[i] = (i < s ? i + 1 : -1);
		}
		for (i = 0; i < b; i++)
		{
			cin >> x >> y;
			left[right[y]] = left[x];
			right[left[x]] = right[y];
			if (left[x] == -1)
				cout << '*';
			else
				cout << left[x];
			cout << ' ';
			if (right[y] == -1)
				cout << '*';
			else
				cout << right[y];
			cout << '\n';
		}
		cout << "-\n";
	}
	return 0;
}