#include <iostream>
using namespace std;
int company, sell[2000], input[2000];
int main()
{
	cin >> company;
	for (int i = 0; i < company; i++)
	{
		cin >> input[i];
		sell[i] = 1;
	}
	for (int i = 0; i < company; i++)
	{
		for (int j = 0; j < company; j++)
		{
			if (input[i] < input[j])
				sell[i]++;
		}
		cout << sell[i] << endl;
	}
	return 0;
}