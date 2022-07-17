#include <iostream>
using namespace std;
int main()
{
	int car = 170;
	int tunnel[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> tunnel[i];
		if (tunnel[i] <= car)
		{
			cout << "CRASH " << tunnel[i] << endl;
			return 0;
		}
	}

	cout << "PASS" << endl;
	return 0;
}