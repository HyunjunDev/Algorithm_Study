#include <iostream>
#include <string>
using namespace std;
int n, y = 1, x = 1;
string s;
int main()
{
	cin >> n;
	cin.ignore();
	getline(cin, s);

	for (int i = 0; i < s.length(); i += 2)
	{
		if (s[i] == 'L')
		{
			if (x > 1)
				x -= 1;
		}
		else if (s[i] == 'R')
		{
			if (x < n)
				x += 1;
		}
		else if (s[i] == 'U')
		{
			if (y > 1)
				y -= 1;
		}
		else if (s[i] == 'D')
		{
			if (y < n)
				y += 1;
		}
	}

	cout << y << " " << x << endl;
	return 0;
}