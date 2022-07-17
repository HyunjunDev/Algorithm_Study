#include <iostream>
using namespace std;
int main()
{
	int tree, count = 0;
	cin >> tree;
	for (int i = 1; i < tree; i++)
	{
		if (tree % i == 0)
			count++;
	}
	cout << count;
	return 0;
}