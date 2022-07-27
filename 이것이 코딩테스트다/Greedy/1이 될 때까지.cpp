#include <iostream>
using namespace std;
int n, k, cnt, temp;

int main()
{
	cin >> n >> k;

	while (true)
	{
		temp = (n / k) * k;
		cnt += n - temp;
		n = temp;

		if (n < k)
			break;

		n /= k;
		cnt++;
	}

	//책에서는 n - 1로 되어있지만 내 생각엔 -1도 되는 것 같다. 왜냐하면 내가 보기엔 n은 항상 0으로 보인다.
	cnt += n - 1;
	cout << cnt;
	return 0;
}