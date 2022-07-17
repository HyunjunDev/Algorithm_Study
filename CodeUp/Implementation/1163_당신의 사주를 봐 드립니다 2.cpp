#include <iostream>
using namespace std;
int main()
{
	int y, m, d, result;
	cin >> y >> m >> d;
	result = y + m + d;
	if (result % 200 < 100)
		cout << "대박" << endl;
	else
		cout << "그럭저럭" << endl;
	return 0;
}