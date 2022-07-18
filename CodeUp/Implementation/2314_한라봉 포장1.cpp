#include <iostream>
using namespace std;
int input;
int cnt;
int main()
{
	cin >> input;
	while (input > 0)
	{
		if (input >= 10)
			input -= 10;
		else if (input >= 5)
			input -= 5;
		else if (input >= 3)
			input -= 3;
		else
			input -= 1;
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}