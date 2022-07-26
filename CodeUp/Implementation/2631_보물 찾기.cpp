#include <iostream>
using namespace std;
int n, k, num[100000], cnt, sum;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;

	for (int i = 0; i < n; i++)
		cin >> num[i];
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			sum += num[j];
			if (sum == k)
			{
				cnt++;
				break;
			}
			else if (sum > k)
				break;
		}
		sum = 0;
	}

	cout << cnt;
	return 0;
}