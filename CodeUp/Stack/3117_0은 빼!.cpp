#include <iostream>
#include <stack>
using namespace std;
int k, n, sum;
stack<int> s;

int main()
{
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> n;
		if (n != 0)
			s.push(n);
		else
			s.pop();
	}

	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}

	cout << sum;
	return 0;
}