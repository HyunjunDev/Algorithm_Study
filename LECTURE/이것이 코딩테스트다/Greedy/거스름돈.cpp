#include <iostream>
using namespace std;
int n, cnt, m = 1000;

int main()
{
	cin >> n;
	m -= n;

	while (m > 0)
	{
		if (m >= 500)
			m -= 500;
		else if (m >= 100)
			m -= 100;
		else if (m >= 50)
			m -= 50;
		else if (m >= 10)
			m -= 10;
		else if (m >= 5)
			m -= 5;
		else if (m >= 1)
			m -= 1;
		cnt++;
	}

	cout << cnt;
	return 0;
}