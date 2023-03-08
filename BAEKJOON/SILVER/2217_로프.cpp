#include <iostream>
#include <algorithm>
using namespace std;
int n, iMax = INT32_MIN;
int rope[100001];
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> rope[i];
    sort(rope, rope + n, greater<>());
    for (int i = 0, j = 1; i < n; i++, j++)
    {
        int tmp = rope[i] * j;
        if (tmp > iMax)
            iMax = tmp;
    }
    cout << iMax;
    return 0;
}