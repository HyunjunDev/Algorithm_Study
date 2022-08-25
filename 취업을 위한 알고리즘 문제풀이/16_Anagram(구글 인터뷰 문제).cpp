#include <iostream>
#include <algorithm>
using namespace std;
string n, m;
int main()
{
	cin >> n;
	cin >> m;
	sort(n.begin(), n.end());
	sort(m.begin(), m.end());
	if (n == m)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}