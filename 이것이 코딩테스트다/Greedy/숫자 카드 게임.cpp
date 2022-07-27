#include <iostream>
using namespace std;
int n, m, mMin = INT32_MAX, nMax = INT32_MIN, input;

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> input;
			if (input < mMin)
				mMin = input;
		}
		if (mMin > nMax)
			nMax = mMin;
		mMin = INT32_MAX;
	}

	cout << nMax;
	return 0;
}