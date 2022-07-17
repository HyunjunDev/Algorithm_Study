#include <iostream>
using namespace std;
int odd = INT32_MIN;
int even = INT32_MIN;
int main()
{
	int input[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> input[i];
		if (input[i] % 2 != 0)
		{
			if (odd < input[i])
				odd = input[i];
		}
		else
		{
			if (even < input[i])
				even = input[i];
		}
	}

	if (odd != INT32_MIN)
		cout << odd << " ";
	if (even != INT32_MIN)
		cout << even << endl;
	return 0;
}