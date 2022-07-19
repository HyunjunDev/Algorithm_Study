#include <iostream>
using namespace std;
int a[10];
int cnt = 10;
int main()
{
	for (int i = 0; i < 10; i++)
		cin >> a[i];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (a[j] >= 10 * cnt)
				cout << "# ";
			else
				cout << "  ";
		}
		cnt--;
		cout << endl;
	}
	return 0;
}