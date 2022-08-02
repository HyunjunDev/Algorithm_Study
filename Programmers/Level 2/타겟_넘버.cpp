#include <string>
#include <vector>
using namespace std;

int answer = 0;
void func(int ans, int n, vector<int> numbers, int target);

int solution(vector<int> numbers, int target) {
    func(0, 0, numbers, target);
    return answer;
}

void func(int ans, int n, vector<int> numbers, int target)
{
    if (n == numbers.size())
    {
        if (ans == target)
            answer += 1;
        return;
    }
    func(ans + numbers[n], n + 1, numbers, target);
    func(ans - numbers[n], n + 1, numbers, target);
}