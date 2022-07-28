#include <iostream>
using namespace std;
int n, a[51], nMax = INT32_MIN, nMin = INT32_MAX;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		if (input > nMax)
			nMax = input;
		if (input < nMin)
			nMin = input;
	}
	cout << nMax * nMin;
	return 0;
}