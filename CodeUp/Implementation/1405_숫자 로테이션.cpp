#include <iostream>
#include <deque>
using namespace std;
int n, input;
deque<int> q;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		q.push_back(input);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << q[j] << " ";
		}
		int front = q[0];
		q.pop_front();
		q.push_back(front);
		cout << endl;
	}
	return 0;
}