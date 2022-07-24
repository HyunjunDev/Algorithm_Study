#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m, k, input, first, second, result, cnt;
vector<int> v;

int main()
{
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(), v.end(), greater<>());

	first = v[0];
	second = v[1];

	cnt = m / (k + 1) * k;
	cnt += m % (k + 1);

	result += cnt * first;
	result += (m - cnt) * second;

	cout << result;
	return 0;
}