#include <iostream>
using namespace std;
int nums[10], cnt = 0, ans = 0;
string s;
int main()
{
	cin >> s;
	for (int i = 0; i < s.length(); i++)
		nums[s[i] - '0']++;
	for (int i = 0; i <= 9; i++)
	{
		if (cnt <= nums[i])
		{
			cnt = nums[i];
			ans = i;
		}
	}
	cout << ans;
	return 0;
}