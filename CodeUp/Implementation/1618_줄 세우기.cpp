#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
int input;
int main()
{
	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < 3; i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}