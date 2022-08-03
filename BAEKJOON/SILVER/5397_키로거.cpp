#include <iostream>
#include <list>
using namespace std;
int main()
{

    int n;
    string s;
    list<char> v;
    auto it = v.begin();

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.clear();
        it = v.begin();
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '<')
            {
                if (it != v.begin())
                    it--;
            }
            else if (s[j] == '>')
            {
                if (it != v.end())
                    it++;
            }
            else if (s[j] == '-')
            {
                if (it != v.begin())
                    it = v.erase(--it);
            }
            else
            {
                v.insert(it, s[j]);
            }
        }
        for (it = v.begin(); it != v.end(); it++)
            cout << *it;
        cout << '\n';
    }
    return 0;
}
