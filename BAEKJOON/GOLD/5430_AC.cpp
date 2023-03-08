#include <iostream>
#include <deque>
#include <string>
#define endl '\n'
using namespace std;
int t;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while (t--)
    {
        string p, x, str;
        int n;
        deque<int> nums;
        cin >> p >> n >> x;
        for (int i = 0; i < x.length(); i++)
        {
            if (isdigit(x[i]) != 0)
                str += x[i];
            else if (!str.empty())
            {
                nums.push_back(stoi(str));
                str = "";
            }
        }
        bool isGreater = false;
        bool isStop = false;
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i] == 'R')
            {
                if (isGreater)
                    isGreater = false;
                else
                    isGreater = true;
            }
            else
            {
                if (nums.empty())
                {
                    cout << "error" << endl;
                    isStop = true;
                    break;
                }
                else
                {
                    if (isGreater)
                        nums.pop_back();
                    else
                        nums.pop_front();
                }
            }
        }

        if (!isStop)
            cout << '[';
        if (!isStop && !nums.empty())
        {
            while (!nums.empty())
            {
                if (nums.size() != 1)
                    cout << (isGreater ? nums.back() : nums.front()) << ',';
                else
                    cout << (isGreater ? nums.back() : nums.front());
                if (isGreater)
                    nums.pop_back();
                else
                    nums.pop_front();
            }
        }
        if (!isStop)
            cout << ']' << endl;
    }
    return 0;
}