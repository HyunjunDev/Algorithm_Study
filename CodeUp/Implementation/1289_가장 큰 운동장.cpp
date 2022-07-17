#include <iostream>
using namespace std;
int main()
{
	int h[3], v[3], r[3];
	int max = INT32_MIN;
	for (int i = 0; i < 3; i++)
	{
		cin >> h[i] >> v[i];
		r[i] = h[i] * v[i];
		if (max < r[i])
			max = r[i];
	}
	cout << max;
	return 0;
}