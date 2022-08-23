#include <iostream>
using namespace std;
int n, m[50001];
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = i; j <= n; j += i)
			m[j] += 1;
	for (int i = 1; i <= n; i++)
		cout << m[i] << ' ';
	return 0;
}