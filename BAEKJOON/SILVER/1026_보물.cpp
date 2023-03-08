#include <iostream>
#include <algorithm>
using namespace std;
int n, ans;
int a[51], b[51];
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(b, b + n, greater<>());
    sort(a, a + n);
    for (int i = 0; i < n; i++)
        ans += a[i] * b[i];
    cout << ans;
    return 0;
}