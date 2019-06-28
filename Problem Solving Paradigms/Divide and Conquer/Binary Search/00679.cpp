#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int i, t, d, node;
	cin >> t;
	while (t--)
	{
		cin >> d;
		if (d == -1)
			break;
		cin >> node;
		int start = 1, l, r, last_node = pow(2, d);
		while (true)
		{
			l = start << 1;
			r = l + 1;
			if (l < last_node and r < last_node)
			{
				if (node & 1)
				{
					start = l;
					node >>= 1;
					node++;
				}
				else
				{
					node >>= 1;
					start = r;
				}
			}
			else
				break;
		}
		cout << start << '\n';
	}
	return 0;
}