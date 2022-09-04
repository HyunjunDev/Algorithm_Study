#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int cnt = 0;
    string st;
    string nums[10] = { "zero" ,"one","two","three", "four" ,"five","six","seven","eight","nine" };
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] - '0' >= 0 && s[i] - '0' <= 9)
        {
            answer *= 10;
            answer += s[i] - '0';
        }
        else
        {
            st += s[i];
            for (int i = 0; i < 10; i++)
            {
                if (st == nums[i])
                {
                    answer *= 10;
                    answer += i;
                    st.erase(st.begin(), st.end());
                }
            }
        }
    }
    return answer;
}