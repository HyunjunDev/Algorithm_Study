#include <iostream>
#include <stack>
using namespace std;
int n;
string input;
stack<char> s;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int i = 0; i < input.length(); i++)
		{
			if (s.empty() && input[i] == ')')
			{
				s.push(')');
				break;
			}
			else if (input[i] == '(')
				s.push('(');
			else
				s.pop();
		}
		if (s.empty())
			cout << "YES" << endl;
		else
		{
			cout << "NO" << endl;
			while (!s.empty())
				s.pop();
		}
	}
	return 0;
}