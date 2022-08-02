#include <iostream>
#include <stack>
#include <string>
using namespace std;
string n;
stack<int> s;
bool on;

int main()
{
	while (true)
	{
		getline(cin, n);
		if (n == ".")
			break;
		for (int i = 0; i < n.length(); i++)
		{
			if (s.empty() && (n[i] == ']' || n[i] == ')'))
			{
				on = true;
				cout << "no" << endl;
				break;
			}
			else if (n[i] == '[' || n[i] == '(')
				s.push(n[i]);
			else if (n[i] == ']' || n[i] == ')')
			{
				if ((s.top() == '[' && n[i] == ')') || (s.top() == '(' && n[i] == ']'))
				{
					on = true;
					cout << "no" << endl;
					break;
				}
				else
					s.pop();
			}
		}

		if (!on)
		{
			if (s.empty())
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
		else
			on = false;

		while (!s.empty())
			s.pop();
	}
	return 0;
}
