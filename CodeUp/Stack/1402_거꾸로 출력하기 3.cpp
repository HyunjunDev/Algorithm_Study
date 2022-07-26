#include <iostream>
#include <stack>
using namespace std;
int n, input;
stack<int> s;

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		s.push(input);
	}

	while (!s.empty())
	{
		cout << s.top() << ' ';
		s.pop();
	}
	return 0;
}