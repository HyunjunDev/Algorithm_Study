//Version 1
#include <iostream>
#include <string>
using namespace std;
string s;
int main()
{
	getline(cin, s);
	s.erase(remove(s.begin(), s.end(), ' '), s.end());
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
	cout << s;
	return 0;
}

//Version 2
#include <iostream>
#include <string>
using namespace std;
string s;
int main()
{
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != ' ')
		{
			s[i] = tolower(s[i]);
			cout << s[i];
		}
	}
	return 0;
}