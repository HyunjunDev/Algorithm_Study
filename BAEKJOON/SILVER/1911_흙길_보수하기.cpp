#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long int n, l, ans, cnt;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<pair<int, int>> vec;
    cin >> n >> l;
    for (int i = 0; i < n; i++)
    {
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        vec.push_back({ tmp1,tmp2 });
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n; i++)
    {
        if (cnt < vec[i].first)
            cnt = vec[i].first;
        while (cnt < vec[i].second)
        {
            cnt += l;
            ans += 1;
        }
    }
    cout << ans;
    return 0;
}