#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zero, first, last;
    zero = first = last = 0;
    int res[2] = { 6,6 };
    for (int i = 0; i < lottos.size(); i++)
    {
        if (lottos[i] == 0)
            zero++;
        if (find(lottos.begin(), lottos.end(), win_nums[i]) != lottos.end())
        {
            first++;
            last++;
        }
    }
    first += zero;
    for (int i = 1, j = 6; i <= lottos.size(); i++, j--)
    {
        if (first >= i)
            res[0] = j;
        if (last >= i)
            res[1] = j;
    }
    answer.push_back(res[0]);
    answer.push_back(res[1]);
    return answer;
}