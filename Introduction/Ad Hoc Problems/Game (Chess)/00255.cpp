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
	int x, y, z, i;
	while (cin >> x >> y >> z)
	{
		int king_row = x / 8, king_col = x % 8;
		int queen_row = y / 8, queen_col = y % 8;
		int queen_row_new = z / 8, queen_col_new = z % 8;
		if (x == y)
			cout << "Illegal state\n";
		else
		{
			set<int> illegal_queen_moves;
			illegal_queen_moves.insert(x);
			if (x > 0 && (x - 1) / 8 == x / 8)
				illegal_queen_moves.insert(x - 1);
			if (x < 63 && (x + 1) / 8 == x / 8)
				illegal_queen_moves.insert(x + 1);
			if (x / 8 > 0)
				illegal_queen_moves.insert(x - 8);
			if (x / 8 < 7)
				illegal_queen_moves.insert(x + 8);
			if (y == z || (queen_col != queen_col_new) && (queen_row != queen_row_new))
				cout << "Illegal move\n";
			else
			{
				// Check if move allowed or illegal
				int op;
				bool illegal = false;
				if (queen_col == queen_col_new)
				{
					if (queen_row > queen_row_new)
						op = -1;
					else
						op = 1;
					for (i = queen_row; i != queen_row_new; i += op)
					{
						if (i == king_row && queen_col == king_col)
							illegal = true;
					}
				}
				else
				{
					if (queen_col > queen_col_new)
						op = -1;
					else
						op = 1;
					for (i = queen_col; i != queen_col_new; i += op)
					{
						if (i == king_col && queen_row == king_row)
							illegal = true;
					}
				}
				illegal |= (x == z);
				if (illegal)
					cout << "Illegal move\n";
				else if (illegal_queen_moves.find(z) != illegal_queen_moves.end())
					cout << "Move not allowed\n";
				else
				{
					int nb_possible_moves = illegal_queen_moves.size() - 1;
					// cout << nb_possible_moves << '\n';
					for (auto move : illegal_queen_moves)
					{
						if (move == x)
							continue;
						if ((move / 8 == z / 8) || (move % 8 == z % 8))
						{
							// cout << move << ' ' << z << '\n';
							// cout << move / 8 << ' ' << z / 8 << '\n';
							// cout << move % 8 << ' ' << z % 8 << '\n';
							nb_possible_moves--;
						}
					}
					// cout << nb_possible_moves << '\n';
					cout << (nb_possible_moves > 0 ? "Continue\n" : "Stop\n");
				}
			}
		}
	}
	return 0;
}