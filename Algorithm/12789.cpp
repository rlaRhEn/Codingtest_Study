#include<iostream>
#include<stack>
#include<queue>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	stack<int> st; //보조 줄
	queue<int> que; // 현재 줄

	int num;//학생 수

	cin >> num; //5
	for (int i = 0; i < num; i++)
	{
		int number;
		cin >> number; // 54132
		que.push(number); // 숫자 큐에 넣기
	}

	int i = 1;
	while (!que.empty())
	{
		if (que.front() == i)
		{
			que.pop();
			i++;
		}
		else if (!st.empty() && st.top() == i)
		{
			st.pop();
			i++;
		}
		else if (!que.empty())
		{
			st.push(que.front());
			que.pop();
		}
		else break;
	}
	while (!st.empty() && st.top() == i)
	{
		st.pop();
		i++;
	}
	if (i == num + 1)
	{
		cout << "Nice\n";
	}
	else
	{
		cout << "Sad\n";
	}
	return 0;
}