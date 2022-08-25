#include <iostream>
#include <stack>
using namespace std;
int n, imax, cnt;
stack<int> st;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		st.push(m);
	}
	imax = st.top();
	st.pop();
	while (!st.empty())
	{
		if (imax < st.top())
		{
			imax = st.top();
			cnt++;
		}
		st.pop();
	}
	cout << cnt;
	return 0;
}