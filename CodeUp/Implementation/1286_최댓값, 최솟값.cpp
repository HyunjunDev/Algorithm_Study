#include <iostream>
using namespace std;
int main()
{
	int max = INT32_MIN;
	int min = INT32_MAX;
	int input;
	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		if (max < input)
			max = input;
		if (min > input)
			min = input;
	}
	cout << max << endl;
	cout << min << endl;
	return 0;
}