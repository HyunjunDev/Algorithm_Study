#include <iostream>
#include <queue>
using namespace std;
int t, n, m;
int main()
{
    cin >> t;
    while (t--)
    {
        priority_queue<int, vector<int>, less<int>> pq;
        queue<pair<int, int>> q;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            pq.push(k);
            q.push({ k,i });
        }

        int idx = 0;
        while (!q.empty())
        {
            if (pq.top() == q.front().first)
            {
                idx++;
                if (q.front().second == m)
                {
                    cout << idx << endl;
                    break;
                }
                pq.pop();
                q.pop();
            }
            else
            {
                q.push({ q.front().first,q.front().second });
                q.pop();
            }
        }
    }
    return 0;
}