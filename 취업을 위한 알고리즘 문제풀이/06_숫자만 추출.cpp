#include <iostream>
using namespace std;
string s, temp;
int ans, cnt;
int main()
{
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
			temp += s[i];
	}
	for (int i = temp.length() - 1, j = 1; i >= 0; i--, j *= 10)
		ans += (temp[i] - '0') * j;
	for (int i = 1; i <= ans; i++)
	{
		if (ans % i == 0)
			cnt++;
	}
	cout << ans << endl;
	cout << cnt << endl;
	return 0;
}