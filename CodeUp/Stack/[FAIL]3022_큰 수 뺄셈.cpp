#include <iostream>
#include <stack>
using namespace std;
string num1, num2;
stack<int> num1S, num2S, n;
bool isMinus, isFirst = true;

int main()
{
	cin >> num1 >> num2;
	int cnt = 0;
	for (int i = 0; i < num1.length(); i++)
	{
		if (num1 == num2) // num1[i] == num2[i]하고 같음 
			cnt++;
	}
	if (cnt >= num1.length()) //두 문자열이 같은지 체크 같다면 0출력
	{
		cout << 0;
		exit(1);
	}
	if (num1.length() == num2.length())//둘이 길이가 같다면
	{
		for (int i = 0; i < num1.length(); i++)
		{
			if (num1[i] < num2[i]) //맨 앞자리부터 크기 비교, 만약 두번째로 입력한 문자열이 더 크다면 음수 부호 및 스왑 
				//스왑하는 이유는 두번째 문자열이 더 클땐 반대로 -해줘야 하기 때문임 ex) 111 888 = -777인데 888 - 111 = 777에다 -부호만 붙이면 같기 때문
			{
				swap(num1, num2);
				isMinus = true;
				break;
			}
		}
	}

	if (num1.length() < num2.length()) //두번째로 입력한 문자열이 더 크다면 스왑 
	{
		swap(num1, num2);
		isMinus = true;
	}
	int sn = 0;

	for (int i = 0; i < num1.length(); i++) //스택에 푸쉬
	{
		num1S.push(num1[i]);
	}
	for (int i = 0; i < num2.length(); i++) //스택에 푸쉬
	{
		num2S.push(num2[i]);
	}
	while (!num1S.empty() && !num2S.empty())
	{
		int y = num1S.top() - '0';
		int x = num2S.top() - '0';
		int minus = y - x + sn; //sn=가중치 
		if (minus < 0) //만약 뺏을 때 0보다 작으면 앞에 1을 빼고 10을 더해야함
		{
			n.push(10 + minus);
			sn = -1;
		}
		else
		{
			n.push(minus);
			sn = 0;
		}
		num1S.pop();
		num2S.pop();
	}
	while (!num1S.empty()) //두 문자열의 길이가 다르다면 아직 남아있는 문자열도 마저 계산하기 위함
	{
		if (sn == -1) //하는 이유는 마지막에 가중치가 있는 상태에서 끝난다면 남아있는 문자열의 첫 숫자에다가만 -1 해야하기 때문에
		{
			n.push(num1S.top() - '0' + sn);
			sn = 0;
		}
		else n.push(num1S.top() - '0');

		num1S.pop();
	}
	if (isMinus) //마이너스 부호
	{
		cout << '-';
	}
	for (int i = 0; i < num1.length(); i++)
	{
		if (isFirst)//0이 나왔는지 체크하기 위한 if문 하는 이유는 000000000으로 나올 수 있기 때문
		{
			if (n.top() == 0)
			{
				n.pop();
				continue;
			}
			else
			{
				isFirst = false;
				cout << n.top();
			}
		}
		else
		{
			cout << n.top();
		}
		n.pop();
	}
	return 0;
}