#include <iostream>
#include <stack>
#include <string>
using namespace std;
string n;
stack<int> s;
int sum;

int main()
{
	getline(cin, n);

	for (int i = 0; i < n.length(); i++)
	{
		if (n[i] == ' ')
		{
			if (sum != 0)
			{
				s.push(sum);
				sum = 0;
			}
		}
		else if (n[i] == '+' || n[i] == '*' || n[i] == '-')
		{
			int n1 = s.top();
			s.pop();
			int n2 = s.top();
			s.pop();
			if (n[i] == '+')
				s.push(n1 + n2);
			else if (n[i] == '*')
				s.push(n1 * n2);
			else if (n[i] == '-')
				s.push(n2 - n1);
		}
		else
		{
			sum *= 10;
			sum += (n[i] - '0');
		}
	}

	cout << s.top();
	return 0;
}