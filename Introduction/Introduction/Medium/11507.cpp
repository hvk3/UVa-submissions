#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	int i, l;
	while (true)
	{
		cin >> l;
		if (!l)
			break;
		string s[l - 1], direction = "+x";
		for (i = 0; i < l - 1; i++)
		{
			cin >> s[i];
			if (s[i] == "No")
				continue;
			if (s[i] == "+y")
			{
				if (direction == "+x")
					direction = "+y";
				else if (direction == "-x")
					direction = "-y";
				else if (direction == "+y")
					direction = "-x";
				else if (direction == "-y")
					direction = "+x";
			}
			if (s[i] == "-y")
			{
				if (direction == "+x")
					direction = "-y";
				else if (direction == "-x")
					direction = "+y";
				else if (direction == "+y")
					direction = "+x";
				else if (direction == "-y")
					direction = "-x";
			}
			if (s[i] == "+z")
			{
				if (direction == "+x")
					direction = "+z";
				else if (direction == "-x")
					direction = "-z";
				else if (direction == "+z")
					direction = "-x";
				else if (direction == "-z")
					direction = "+x";
			}
			if (s[i] == "-z")
			{
				if (direction == "+x")
					direction = "-z";
				else if (direction == "-x")
					direction = "+z";
				else if (direction == "+z")
					direction = "+x";
				else if (direction == "-z")
					direction = "-x";
			}
		}
		cout << direction << '\n';
	}
	return 0;
}

