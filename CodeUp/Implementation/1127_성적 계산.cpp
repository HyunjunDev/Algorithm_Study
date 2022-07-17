#include <iostream>
using namespace std;
int main()
{
	int i[3];
	float f[3];
	float result = 0;
	for (int j = 0; j < 3; j++)
	{
		cin >> f[j] >> i[j];
		result += f[j] * i[j];
	}

	cout << fixed;
	cout.precision(1);
	cout << result;
	return 0;
}