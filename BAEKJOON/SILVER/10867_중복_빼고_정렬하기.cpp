#include <iostream>
#include <set>
using namespace std;
set<int> t;
int n, m;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        t.insert(m);
    }
    for (set<int>::iterator it = t.begin(); it != t.end(); it++)
        cout << *it << " ";
    return 0;
}