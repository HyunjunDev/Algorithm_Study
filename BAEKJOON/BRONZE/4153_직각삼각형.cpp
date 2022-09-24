#include <iostream>
#include <algorithm>
using namespace std;
int a[3];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while (true)
	{
		for (int i = 0; i < 3; i++)
			cin >> a[i];
		if (a[0] == 0 && a[1] == 0 && a[2] == 0)
			break;
		sort(a, a + 3);
		int result = a[0] * a[0] + a[1] * a[1];
		if (result == a[2] * a[2])
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
	return 0;
}