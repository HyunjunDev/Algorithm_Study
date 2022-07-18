#include <iostream>
using namespace std;
int n;
int cnt;
int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++)
			cnt++;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++, cnt--)
			cout << cnt << " ";
		cout << endl;
	}
	return 0;
}