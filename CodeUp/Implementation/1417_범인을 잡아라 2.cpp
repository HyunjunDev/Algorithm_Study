#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> v;
	int input;
	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end(), greater<>());
	cout << v[2] << endl;
	return 0;
}