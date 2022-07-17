#include <iostream>
using namespace std;
int main()
{
	int length, v[3];
	bool on = false;
	cin >> length;
	for (int i = 1; i <= length / 3; i++)
	{
		for (int j = i; j <= length / 2; j++)
		{
			v[0] = i;
			v[1] = j;
			v[2] = length - (v[0] + v[1]);
			if (v[2] < v[0] + v[1] && v[2] >= v[1])
			{
				on = true;
				cout << v[0] << " " << v[1] << " " << v[2];
				cout << endl;
			}
		}
	}

	if (!on)
		cout << -1;

	return 0;
}