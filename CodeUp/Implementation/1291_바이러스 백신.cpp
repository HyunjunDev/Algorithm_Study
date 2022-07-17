#include <iostream>
using namespace std;
int main()
{
	int v[3], v3;
	int small = INT32_MAX;
	for (int i = 0; i < 3; i++)
	{
		cin >> v[i];
		if (v[i] < small)
			small = v[i];
	}
	for (int i = 1; i <= small; i++)
	{
		if (v[0] % i == 0 && v[1] % i == 0 && v[2] % i == 0)
			v3 = i;
	}
	cout << v3;
	return 0;
}