#include <iostream>
using namespace std;
int a[5][5];
int result, maximum;
int main()
{
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> a[i][j];
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			result = a[i][j] + a[i][j - 1] 
				+ a[i][j + 1] + a[i - 1][j]
				+ a[i + 1][j] + a[i - 1][j + 1] 
				+ a[i + 1][j - 1] + a[i + 1][j + 1] 
				+ a[i - 1][j - 1];
			if (maximum < result)
				maximum = result;
		}
	}
	cout << maximum;
	return 0;
}