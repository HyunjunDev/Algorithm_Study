#include <iostream>
using namespace std;
int main()
{
	int s, result = 0;
	cin >> s;
	for (int i = 1; i <= s; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			result += j;
		}
	}

	cout << result << endl;
	return 0;
}