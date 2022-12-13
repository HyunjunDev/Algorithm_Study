#include <iostream>
using namespace std;
int n, cnt[3];
int g[1000001];

int main()
{
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        g[i] = 1 + g[i - 1];
        if (i % 3 == 0)
        {
            if (g[i] > g[i / 3] + 1)
                g[i] = g[i / 3] + 1;
        }
        if (i % 2 == 0)
        {
            if (g[i] > g[i / 2] + 1)
                g[i] = g[i / 2] + 1;
        }
    }
    cout << g[n];
    return 0;
}