#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
int n;
int a[1000000];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;
	return 0;
}