#include <iostream>
using namespace std;
string input;
bool on;
int main()
{
	cin >> input;
	if ((input[0] - '0') % 3 == 0 && input[0] - '0' > 2)
	{
		cout << "K";
		on = true;
	}
	if ((input[1] - '0') % 3 == 0 && input[1] - '0' > 2)
	{
		cout << "K";
		on = true;
	}
	if ((input[2] - '0') % 3 == 0 && input[2] - '0' > 2)
	{
		cout << "K";
		on = true;
	}
	if (!on)
		cout << input;
	return 0;
}