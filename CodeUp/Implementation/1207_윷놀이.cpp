#include <iostream>
using namespace std;
int input[4], cnt;
int main()
{
	for (int i = 0; i < 4; i++)
	{
		cin >> input[i];
		if (input[i] == 1)
			cnt++;
	}

	switch (cnt)
	{
	case 0:
		cout << "¸ğ" << endl;
		break;
	case 1:
		cout << "µµ" << endl;
		break;
	case 2:
		cout << "°³" << endl;
		break;
	case 3:
		cout << "°É" << endl;
		break;
	case 4:
		cout << "À·" << endl;
		break;
	default:
		break;
	}
	return 0;
}