#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define rep(i, x, y, z) for (i = x; i < y; i += z)
#define repb(i, x, y, z) for (i = x; i > y; i -= z)
#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	double well_height, initial_speed, decline, fatigue;
	cin >> well_height >> initial_speed >> decline >> fatigue;
	while (well_height)
	{
		double fatigue_speed = (initial_speed * fatigue) / 100.0, curr_height = 0.0;
		int days = 1;
		while (1)
		{
			curr_height += initial_speed;
			if (initial_speed > 0)
				initial_speed -= fatigue_speed;
			if (curr_height > well_height)
				break;
			curr_height -= decline;
			if (curr_height < 0)
				break;
			days++;
		}
		if (curr_height >= 0)
			cout << "success on day " << days << '\n';
		else
			cout << "failure on day " << days << '\n';
		cin >> well_height >> initial_speed >> decline >> fatigue;
	}
	return 0;
}