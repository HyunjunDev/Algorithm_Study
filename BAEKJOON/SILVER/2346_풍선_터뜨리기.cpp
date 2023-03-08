#include <iostream>
#include <deque>
using namespace std;
int n, m;
deque<pair<int, int>> dq;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        dq.push_back({ m,i });
    }
    bool isFirst = false;
    while (!dq.empty())
    {
        int temp = dq.front().first;
        cout << dq.front().second << ' ';
        dq.pop_front();
        if (!dq.empty())
        {
            if (temp > 0)
            {
                for (int i = 1; i < temp; i++)
                {
                    dq.push_back(dq.front());
                    dq.pop_front();
                }
            }
            else
            {
                for (int i = 1; i <= -1 * temp; i++)
                {
                    dq.push_front(dq.back());
                    dq.pop_back();
                }
            }
        }
    }
    return 0;
}