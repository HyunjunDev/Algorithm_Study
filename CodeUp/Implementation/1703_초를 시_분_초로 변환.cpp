#include <iostream>
using namespace std;
int main()
{
	int time, h, m, s;
	cin >> time;
	s = time % 60;
	m = time / 60;
	h = m / 60;
	if (m >= 60)
		m %= 60;
	cout << h << " " << m << " " << s;
	return 0;
}