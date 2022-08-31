#include <iostream>
using namespace std;
int c, h, pos;
string s;
int main()
{
	cin >> s;
	if (s[1] == 'H')
	{
		c = 1;
		pos = 2;
	}
	else
	{
		int i = 1;
		for (i; s[i] != 'H'; i++)
		{
			if (s[i] != 1)
				c *= 10;
			c += s[i] - '0';
		}
		pos = i + 1;
	}
	if (s[pos] == '\0')
	{
		h = 1;
	}
	else
	{
		for (int i = pos; s[i] != '\0'; i++)
		{
			if (s[i] != pos)
				h *= 10;
			h += s[i] - '0';
		}
	}
	cout << c * 12 + h;
	return 0;
}