#include <iostream>
#include <stack>
using namespace std;
string s;
stack<char> st;
int ans, n;

int main()
{
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
			n += 1;
		else
		{
			if (st.top() == '(')
			{
				n -= 1;
				ans += n;
			}
			else
			{
				n -= 1;
				ans += 1;
			}
		}
		st.push(s[i]);
	}
	cout << ans;
	return 0;
}