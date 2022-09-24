#include <iostream>
using namespace std;
int n;
string str;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		int point = 0;
		int con = 0;
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == 'O')
			{
				con++;
				point += con;
			}
			else
				con = 0;
		}
		cout << point << endl;
	}
	return 0;
}