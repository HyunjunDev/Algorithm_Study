#include <iostream>
#include <string>
using namespace std;
string input;
int cCount, c2Count;
char c, c2;
int main()
{
	cin >> input;
	for (int i = 0; i < input.length(); i++)
	{
		c = toupper(input[i]);
		if (i < input.length() - 1)
			c2 = toupper(input[i + 1]);
		if (c == 'C')
		{
			cCount++;
			if (c2 == 'C' && i < input.length() - 1)
				c2Count++;
		}
	}
	cout << cCount << endl;
	cout << c2Count << endl;
	return 0;
}