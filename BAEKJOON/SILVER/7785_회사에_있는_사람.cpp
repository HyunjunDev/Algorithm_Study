#include <iostream>
#include <set>
#define endl '\n'
using namespace std;
set<string, greater<string>> s;
int n;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str1, str2;
        cin >> str1 >> str2;
        if (str2 == "leave")
            s.erase(str1);
        else
            s.insert(str1);
    }
    for (const auto& str : s) {
        cout << str << endl;
    }
    return 0;
}