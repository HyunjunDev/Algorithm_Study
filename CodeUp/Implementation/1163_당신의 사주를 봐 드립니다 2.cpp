#include <iostream>
using namespace std;
int main()
{
	int y, m, d, result;
	cin >> y >> m >> d;
	result = y + m + d;
	if (result % 200 < 100)
		cout << "���" << endl;
	else
		cout << "�׷�����" << endl;
	return 0;
}