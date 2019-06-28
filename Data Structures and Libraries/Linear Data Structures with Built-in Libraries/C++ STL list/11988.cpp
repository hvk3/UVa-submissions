#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define mod 1000000007

using namespace std;

struct node
{
	char val;
	node* next;
};

int main()
{
	ios::sync_with_stdio(0);
	int i, n;
	string s, t;
	while (cin >> s)
	{
		node *head, *tmp, *tmp_, *tail;
		tmp = head = tail = NULL;
		n = s.length();
		for (i = 0; i < n; i++)
		{
			if (s[i] == ']')
			{
				if (tail == NULL)
				{
					tail = new node();
					tmp = head = tail;
				}
				else
					tmp = tail;
			}
			else if (s[i] == '[')
			{
				if (head == NULL)
				{
					head = new node();
					tmp = tail = head;
				}
				else
				{
					tmp = new node();
					tmp -> val = '\0';
					tmp -> next = head;
					head = tmp;
				}
			}
			else
			{
				if (tmp != NULL)
				{
					tmp_ = tmp -> next;
					if (tmp -> val != '\0')
					{
						tmp -> next = new node();
						tmp = tmp -> next;
					}
					tmp -> val = s[i];
					tmp -> next = tmp_;
					if (tmp -> next == NULL)
						tail = tmp;
				}
				else
				{
					head = new node();
					head -> val = s[i];
					head -> next = NULL;
					tail = tmp = head;
				}
			}
		}
		tmp = head;
		while (tmp != NULL)
		{
			if (tmp -> val != '\0')
				cout << tmp -> val;
			tmp = tmp -> next;
		}
		cout << '\n';
	}
	return 0;
}