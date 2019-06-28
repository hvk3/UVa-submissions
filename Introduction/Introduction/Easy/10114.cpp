#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	ld loan_duration, down_payment, loan_amount, nb_depreciation_records, month, depreciation_fraction, previous_depreciation;
	while (cin >> loan_duration >> down_payment >> loan_amount >> nb_depreciation_records)
	{
		if (loan_duration < 0.0)
			break;
		int i, j;
		map<ld, ld> depreciation_records;
		for (i = 0; i < nb_depreciation_records; i++)
		{
			cin >> month >> depreciation_fraction;
			depreciation_records[month] = depreciation_fraction;
		}
		j = 0;
		ld total = loan_amount + down_payment, amount_owed = loan_amount, amount_paid_monthly = loan_amount / loan_duration;
		total -= total * depreciation_records[0];
		while (amount_owed > total)
		{
			j++;
			if (depreciation_records.find(j) != depreciation_records.end())
				previous_depreciation = depreciation_records[j];
			total -= previous_depreciation * total;
			amount_owed -= amount_paid_monthly;
		}
		cout << j << " month";
		if (j != 1)
			cout << 's';
		cout << '\n';
	}
	return 0;
}

