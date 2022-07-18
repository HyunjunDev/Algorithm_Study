#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int n, input;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	for (int i = 0; i < n; i++)
	{
		cout << i+1 << ": ";
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			if (v[i] < v[j])
				cout << "< ";
			else if (v[i] > v[j])
				cout << "> ";
			else
				cout << "= ";
		}
		cout << endl;
	}
	return 0;
}