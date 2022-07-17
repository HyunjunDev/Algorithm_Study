#include <iostream>
using namespace std;
string input;
char result[2][100];
int main()
{
	cin >> input;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < input.length(); j++)
		{
			if (i == 0)
				result[i][j] = input[j] + 2;
			else
				result[i][j] = (input[j] * 7) % 80 + 48;
		}
		cout << result[i] << endl;
	}
	return 0;
}