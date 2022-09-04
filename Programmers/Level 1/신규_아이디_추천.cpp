#include <string>
using namespace std;

string solution(string new_id) {
    string answer = "";
    int i = 0;
    while (answer.length() < 15)
    {
        if (new_id[i] >= 'A' && new_id[i] <= 'Z')
            answer += tolower(new_id[i]);
        else if (new_id[i] >= 'a' && new_id[i] <= 'z')
            answer += new_id[i];
        else if (new_id[i] == '.')
        {
            if (answer[answer.length() - 1] != '.' && !answer.empty())
                answer += '.';
        }
        else if ((new_id[i] - '0' >= 0 && new_id[i] - '0' <= 9) || new_id[i] == '-' || new_id[i] == '_')
            answer += new_id[i];
        i++;
        if (i >= new_id.length())
            break;
    }
    if (answer.empty())
        answer += 'a';
    if (answer[answer.length() - 1] == '.')
    {
        while (answer[answer.length() - 1] == '.')
            answer.erase(answer.length() - 1);
    }
    if (answer.length() < 3)
    {
        for (int i = answer.length(); i < 3; i++)
            answer += answer[answer.length() - 1];
    }
    return answer;
}