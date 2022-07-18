#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int n, input, k;
bool on;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
	}
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		if (v[i] == k)
		{
			cout << i + 1;
			on = true;
			break;
		}
	}
	if (!on)
		cout << -1;
	return 0;
}