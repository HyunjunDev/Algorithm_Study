#include <iostream>
#include <queue>
using namespace std;
int n, k, cnt = 1;
queue<int> q;

int main()
{
    cin >> n;
    cin >> k;
    for (int i = 1; i <= n; i++)
        q.push(i);

    cout << "<";
    while (!q.empty())
    {
        if (cnt % k == 0)
        {
            if (q.size() > 1)
                cout << q.front() << ", ";
            else
                cout << q.front() << ">";
        }
        else
            q.push(q.front());
        q.pop();
        cnt++;
    }
    return 0;
}