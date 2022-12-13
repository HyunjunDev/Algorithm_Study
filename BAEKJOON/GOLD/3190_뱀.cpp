#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;
int n, k, l, turn = 0, curDir = 2, curMove;
deque<pair<int, int>> snake;
vector<pair<int, int>> apple;
vector<pair<int, char>> moving;
vector<pair<int, int>> dir;
void Game(int y, int x)
{
    snake.push_back({ y,x });
    y += dir[curDir].first;
    x += dir[curDir].second;
    turn++;
    if (x<1 || y<1 || x>n || y>n)
    {
        return;
    }
    for (auto iter = snake.begin(); iter != snake.end(); iter++)
    {
        if (y == iter->first && x == iter->second)
        {
            return;
        }
    }
    bool ischk = false;
    for (int i = 0; i < apple.size(); i++)
    {
        if (y == apple[i].first && x == apple[i].second)
        {
            apple.erase(apple.begin() + i);
            ischk = true;
            break;
        }
    }
    if (!ischk)
        snake.pop_front();

    if (curMove < moving.size())
    {
        if (turn == moving[curMove].first)
        {
            if (moving[curMove].second == 'L')
            {
                curDir--;
                if (curDir < 0)
                {
                    curDir = 3;
                }
            }
            else
            {
                curDir++;
                if (curDir > 3)
                {
                    curDir = 0;
                }
            }
            curMove++;
        }
    }
    Game(y, x);
}
int main()
{
    cin >> n >> k;
    dir.push_back({ 0,-1 });
    dir.push_back({ -1,0 });
    dir.push_back({ 0,1 });
    dir.push_back({ 1,0 });
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        apple.push_back({ a,b });
    }
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        int a;
        char b;
        cin >> a;
        cin >> b;
        moving.push_back({ a,b });
    }
    sort(moving.begin(), moving.end());
    Game(1, 1);
    cout << turn << endl;
    return 0;
}