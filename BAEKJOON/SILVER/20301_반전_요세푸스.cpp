#include <iostream>
#include <deque>
using namespace std;
int n, k, m;
deque<int> dq;
int main()
{
    cin >> n >> k >> m;
    for (int i = 1; i <= n; i++)
        dq.push_back(i);

    int idx = 0;
    int dieIdx = 0;
    bool isReverse = false;
    while (!dq.empty())
    {
        idx++;
        if (idx % k == 0)
        {
            if (!isReverse)
            {
                cout << dq.front() << endl;
                dq.pop_front();
            }
            else
            {
                cout << dq.back() << endl;
                dq.pop_back();
            }
            dieIdx++;
            if (dieIdx >= m)
            {
                dieIdx = 0;
                isReverse = !isReverse;
            }
        }
        else
        {
            if (!isReverse)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    return 0;
}