#include <iostream>
#include <string>
#include <stack>
using namespace std;
int n;
string s[100001];
stack<char> ans;
int main()
{
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
		getline(cin, s[i]);

	for (int i = 0; i < n; i++)
	{
		cout << "Case #" << i + 1 << ':';
		for (int j = s[i].length() - 1; j >= 0; j--)
		{
			ans.push(s[i][j]);
			if (s[i][j] == ' ' || j == 0)
			{
				if (j == 0)
					cout << ' ';
				while (!ans.empty())
				{
					cout << ans.top();
					ans.pop();
				}
			}
		}
		cout << endl;
	}
	return 0;
}