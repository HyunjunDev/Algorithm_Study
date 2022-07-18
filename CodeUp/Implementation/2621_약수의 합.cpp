#include <iostream>
using namespace std;
int input, result;
int main()
{
	cin >> input;
	for (int i = 1; i <= input; i++)
	{
		if (input % i == 0)
			result += i;
	}
	cout << result;
	return 0;
}