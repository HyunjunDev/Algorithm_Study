#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
using namespace std;
vector<int> vec;
long long int n, ans;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
    }
    sort(vec.begin(), vec.end());

    for (int i = 1; i <= n; i++)
    {
        ans += abs(i - vec[i - 1]);
    }

    cout << ans;
    return 0;
}