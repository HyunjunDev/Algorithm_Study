#include <iostream>
using namespace std;
int length;
string n;
int main()
{
	cin >> length;
	cin >> n;
	for (int i = 0, j = n.length()-1; i < n.length(); i++, j--)
	{
		cout << n[i];
		if (j > 2 && j % 3 == 0)
			cout << ",";
	}
	return 0;
}