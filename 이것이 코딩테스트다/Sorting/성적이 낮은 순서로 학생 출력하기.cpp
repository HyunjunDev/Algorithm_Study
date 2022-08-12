#include <iostream>
#include <vector> 
using namespace std;
int n;
vector<string> v[10000];
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		int m;
		cin >> s;
		cin >> m;
		v[m].push_back(s);
	}
	for (int i = 0; i <= 100; i++)
		for (int j = 0; j < v[i].size(); j++)
			cout << v[i][j] << ' ';
	return 0;
}