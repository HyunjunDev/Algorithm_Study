#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector<int> vec;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < n; i++)
		cout << vec[i] << endl;
	return 0;
}