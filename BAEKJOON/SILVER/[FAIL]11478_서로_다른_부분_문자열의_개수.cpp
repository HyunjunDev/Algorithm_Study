#include <iostream>
#include <map>
using namespace std;
map<string, bool> m;
string s;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		string temp;
		for (int j = i; j < s.length(); j++)
		{
			temp += s[j];
			if (m.find(temp) == m.end())
				m.insert({ temp,false });
		}
	}
	cout << m.size();
	return 0;
}