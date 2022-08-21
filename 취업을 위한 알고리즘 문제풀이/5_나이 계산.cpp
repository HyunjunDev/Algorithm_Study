#include <iostream>
using namespace std;
string s;
int age;
int main()
{
	cin >> s;
	if (s[7] == '1' || s[7] == '2')
	{
		age = 120 - ((s[0] - '0') * 10 + (s[1] - '0'));
		cout << age << ' ';
		if (s[7] == '1')
			cout << 'M';
		else
			cout << 'W';
	}
	else if (s[7] == '3' || s[7] == '4')
	{
		age = 20 - ((s[0] - '0') * 10 + (s[1] - '0'));
		cout << age << ' ';
		if (s[7] == '3')
			cout << 'M';
		else
			cout << 'W';
	}
	return 0;
}