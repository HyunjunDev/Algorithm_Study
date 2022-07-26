#include <iostream>
#include <stack>
#include <string>
using namespace std;
string a, b;
stack<int> s;
int w, sum;

int main()
{
	cin >> a >> b;
	if (a.length() < b.length())
		swap(a, b);

	for (int i = a.length() - 1, j = b.length() - 1; i >= 0; i--, j--)
	{
		if (j >= 0)
			sum = (a[i] - '0') + (b[j] - '0') + w;
		else
			sum = (a[i] - '0') + w;
		s.push(sum % 10);
		w = sum / 10;
	}

	if (w > 0)
		s.push(w);

	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
	return 0;
}