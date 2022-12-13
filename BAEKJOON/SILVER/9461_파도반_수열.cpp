#include <iostream>
using namespace std;

long long int g[1000];
long long int t, n;

long long int Wave(int v)
{
    if (g[v] != 0)
        return g[v];
    return g[v] = Wave(v - 1) + Wave(v - 5);
}

int main()
{
    g[1] = g[2] = g[3] = 1;
    g[4] = g[5] = 2;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << Wave(n) << endl;
    }
    return 0;
}