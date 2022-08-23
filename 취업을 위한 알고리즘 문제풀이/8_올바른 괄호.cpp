#include <iostream>
#include <stack>
using namespace std;
stack<char> st;
string s;
int main()
{
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
			st.push(s[i]);
		else if (s[i] == ')' && st.empty())
		{
			cout << "NO";
			return 0;
		}
		else
			st.pop();
	}
	if (st.empty())
		cout << "YES";
	else
		cout << "NO";
	return 0;
}