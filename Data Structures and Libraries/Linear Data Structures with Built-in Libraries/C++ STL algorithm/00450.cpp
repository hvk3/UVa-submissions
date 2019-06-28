#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

struct Person
{
	string title, first_name, last_name, address;
	string home_phone, work_phone, mailbox, department;
	Person() :
		title(""),
		first_name(""),
		last_name(""),
		address(""),
		home_phone(""),
		work_phone(""),
		department(""),
		mailbox("") {}
	const bool operator<(const Person &other)
	{
		return last_name < other.last_name;
	}
};

int main()
{
	ios::sync_with_stdio(0);
	int i, j, k, n;
	string tmp, dept, info;
	cin >> n;
	cin.ignore();
	vector<Person> people;
	for (i = 0; i < n; i++)
	{
		getline(cin, dept);
		while (true)
		{
			getline(cin, info);
			if (info.length() == 0)
				break;
			Person p;
			for (k = 0; k < info.length(); k++)
			{
				j = k;
				tmp = "";
				while (j < info.length() && info[j] != ',')
				{
					tmp += info[j];
					j++;
				}
				if (p.title.length() == 0)
					p.title = tmp;
				else if (p.first_name.length() == 0)
					p.first_name = tmp;
				else if (p.last_name.length() == 0)
					p.last_name = tmp;
				else if (p.address.length() == 0)
					p.address = tmp;
				else if (p.home_phone.length() == 0)
					p.home_phone = tmp;
				else if (p.work_phone.length() == 0)
					p.work_phone = tmp;
				else if (p.mailbox.length() == 0)
					p.mailbox = tmp;
				k = j;
			}
			p.department = dept;
			people.push_back(p);
		}
	}
	sort(people.begin(), people.end());
	for (j = 0; j < people.size(); j++)
	{
		cout << "----------------------------------------\n";
		cout << people[j].title << ' ' << people[j].first_name << ' ' << people[j].last_name << '\n';
		cout << people[j].address << '\n';
		cout << "Department: " << people[j].department << '\n';
		cout << "Home Phone: " << people[j].home_phone << '\n';
		cout << "Work Phone: " << people[j].work_phone << '\n';
		cout << "Campus Box: " << people[j].mailbox << '\n';
	}
	return 0;
}