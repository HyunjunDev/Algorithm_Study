#include <iostream>
using namespace std;
int n, l = -99999999, s = 999999999;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		if (l < m)
			l = m;
		if (s > m)
			s = m;
	}
	cout << l - s;
	return 0;
}