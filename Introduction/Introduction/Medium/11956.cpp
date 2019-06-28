#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	char buffer[100010];
	int i, t, ptr, memory[110];
	scanf("%d", &t);
	for (int tc = 1; tc <= t; tc++)
	{
		for (i = 0; i < 100; i++)
			memory[i] = 0;
		scanf("%s", buffer);
		ptr = 0;
		for (i = 0; buffer[i]; i++)
		{
			// cout << ptr << ' ' << memory[ptr] << '\n';
			if (buffer[i] == '>')
			{
				ptr++;
				if (ptr == 100)
					ptr = 0;
			}
			if (buffer[i] == '<')
			{
				ptr--;
				if (ptr == -1)
					ptr = 99;
			}
			if (buffer[i] == '+')
			{
				memory[ptr]++;
				if (memory[ptr] == 256)
					memory[ptr] = 0;
			}
			if (buffer[i] == '-')
			{
				memory[ptr]--;
				if (memory[ptr] == -1)
					memory[ptr] = 255;
			}
		}
		printf("Case %d:", tc);
		for (i = 0; i < 100; i++)
			printf(" %02X", memory[i]);
		printf("\n");
	}
	return 0;
}

