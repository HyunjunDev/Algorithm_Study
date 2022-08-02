#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    vector<int> temp;
    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i][0] == 'I')
        {
            int num = 0;
            for (int j = operations[i].size() - 1, k = 1; j > 1; j--, k *= 10)
            {
                if (operations[i][j] == '-')
                    num *= -1;
                else
                    num += (operations[i][j] - '0') * k;
            }
            temp.push_back(num);
        }
        else
        {
            if (operations[i][2] == '1' && !temp.empty())
            {
                int maxIndex = max_element(temp.begin(), temp.end()) - temp.begin();
                temp.erase(temp.begin() + maxIndex);
            }
            else if (operations[i][2] == '-' && !temp.empty())
            {
                int minIndex = min_element(temp.begin(), temp.end()) - temp.begin();
                temp.erase(temp.begin() + minIndex);
            }
        }
    }
    if (!temp.empty())
    {
        int m = *max_element(temp.begin(), temp.end());
        int n = *min_element(temp.begin(), temp.end());
        answer.push_back(m);
        answer.push_back(n);
    }
    else
    {
        answer.push_back(0);
        answer.push_back(0);
    }
    return answer;
}