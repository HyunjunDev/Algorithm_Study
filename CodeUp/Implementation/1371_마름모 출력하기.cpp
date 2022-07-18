#include <iostream>
using namespace std;
int n;
int main()
{
	cin >> n;
	for (int i = n; i > 0; i--)
	{
		for (int j = 1; j < i; j++)
		{
			cout << " ";
		}
		cout << "*";
		for (int k = n; k > i; k--)
		{
			cout << "  ";
		}
		cout << "*";
		cout << endl;
	}

	for (int i = n; i > 0; i--)
	{
		for (int k = n; k > i; k--)
		{
			cout << " ";
		}
		cout << "*";
		for (int j = 1; j < i; j++)
		{
			cout << "  ";
		}
		cout << "*";
		cout << endl;
	}
	return 0;
}