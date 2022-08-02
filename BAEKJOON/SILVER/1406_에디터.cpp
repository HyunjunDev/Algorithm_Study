#include <iostream>
#include <list>
using namespace std;
string s;
int n;

int main()
{
	cin >> s >> n;
	list<char> lst(s.begin(), s.end());
	auto cursor = lst.end();

	for (int i = 0; i < n; i++)
	{
		char input;
		cin >> input;
		if (input == 'L')
		{
			if (cursor != lst.begin())
				cursor--;
		}
		else if (input == 'D')
		{
			if (cursor != lst.end())
				cursor++;
		}
		else if (input == 'B')
		{
			if (cursor != lst.begin())
				cursor = lst.erase(--cursor);
		}
		else
		{
			cin >> input;
			lst.insert(cursor, input);
		}
	}
	for (cursor = lst.begin(); cursor != lst.end(); cursor++)
		cout << *cursor;
	return 0;
}