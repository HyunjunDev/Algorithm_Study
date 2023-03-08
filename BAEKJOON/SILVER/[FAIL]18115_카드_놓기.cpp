#include <iostream>
#include <deque>
#include <vector>
using namespace std;
int n;
int main()
{
    cin >> n;
    deque<int> ans;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];
    int card = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (vec[i] == 1)
        {
            ans.push_back(card);
        }
        else if (vec[i] == 2)
        {
            int tmp = ans.back();
            ans.pop_back();
            ans.push_back(card);
            ans.push_back(tmp);
        }
        else if (vec[i] == 3)
        {
            ans.push_front(card);
        }
        card++;
    }
    for (int i = n - 1; i >= 0; i--)
        cout << ans[i] << ' ';
    return 0;
}