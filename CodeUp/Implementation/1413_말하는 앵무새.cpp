#include <iostream>
#include <string>
using namespace std;
int main()
{
	string input, out;
	getline(cin, input);
	out.resize(input.length());
	for (int i = input.length() - 1, j = 0; i >= 0; i--, j++)
		out[j] = input[i];
	cout << out << endl;
	return 0;
}