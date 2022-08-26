#include <iostream>
#include <stack>
using namespace std;
int n, cnt = 1, res;
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
	int sMax = st.top();
	st.pop();
	while (!st.empty())
	{
		if (st.top() <= sMax)
			cnt++;
		else
			cnt = 1;
		sMax = st.top();
		st.pop();
		if (res < cnt)
			res = cnt;
	}
	cout << res;
	return 0;
}