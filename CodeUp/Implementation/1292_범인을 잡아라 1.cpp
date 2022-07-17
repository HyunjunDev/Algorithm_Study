#include <iostream>
using namespace std;
long long int dna;
string input;
int main()
{
	cin >> input;

	for (int i = 0; i < 10; i++)
		dna += ((int)input[i] - '0');

	if (dna % 7 == 4)
		cout << "suspect" << endl;
	else
		cout << "citizen" << endl;

	return 0;
}