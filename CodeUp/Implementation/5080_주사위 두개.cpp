#include <iostream>
using namespace std;
int score[2], n[2], input;
int main()
{
	score[0] = score[1] = 100;
	cin >> input;
	for (int i = 0; i < input; i++)
	{
		cin >> n[0] >> n[1];
		if (n[0] < n[1])
			score[0] -= n[1];
		else if (n[0] > n[1])
			score[1] -= n[0];
	}
	cout << score[0] << endl;
	cout << score[1] << endl;
	return 0;
}