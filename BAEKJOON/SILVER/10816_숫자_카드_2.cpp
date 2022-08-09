#include <iostream>
#include <map>
using namespace std;
int n1, n2;
map<int, int> m;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n1;
	for (int i = 0; i < n1; i++)
	{
		int input;
		cin >> input;
		if (m.find(input) != m.end())
			m[input]++;
		else
			m.insert({ input,1 });
	}
	cin >> n2;
	for (int i = 0; i < n2; i++)
	{
		int input;
		cin >> input;
		if (m.find(input) != m.end())
			cout << m[input] << ' ';
		else
			cout << 0 << ' ';
	}
	return 0;
}
