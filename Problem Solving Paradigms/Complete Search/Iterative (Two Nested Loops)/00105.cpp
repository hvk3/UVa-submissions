#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

struct Building
{
	int start, end, height;
};

int main()
{
	ios::sync_with_stdio(0);
	vector <Building> buildings;
	Building building;
	int i, s, e, h;
	while (cin >> s >> h >> e)
	{
		building.start = s;
		building.end = e;
		building.height = h;
		buildings.push_back(building);
	}
	int marked[100000], start = INT_MAX, end = -1;
	for (i = 0; i < 100000; i++)
		marked[i] = -1;
	for (auto building : buildings)
	{
		end = max(end, building.end);
		start = min(start, building.start);
		for (i = building.start; i < building.end; i++)
			marked[i] = max(marked[i], building.height);
	}
	cout << start << ' ' << marked[start];
	int prev_height = marked[start];
	for (i = start + 1; i <= end; i++)
	{
		if (marked[i] != prev_height)
		{
			prev_height = max(0, marked[i]);
			cout << ' ' << i << ' ' << prev_height;
		}
	}
	cout << '\n';
	return 0;
}