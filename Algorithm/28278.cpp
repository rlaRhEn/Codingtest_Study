#include<iostream>
#include<stack>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int trying; //명령 횟수
	int command; //명령

	stack<int> st;
	cin >> trying;
	for (int i = 0; i < trying; i++)
	{
		cin >> command;
		switch (command)
		{
		case 1: //스택 쌓기
			int pushNum;
			cin >> pushNum;
			st.push(pushNum);
			break;
		case 2: //Pop 이후 그 값 출력 없으면 -1
			if (st.empty())
			{
				cout << "-1\n";
			}
			else {
				cout << st.top() << "\n";
				st.pop();
			}
			break;
		case 3: // 스택갯수 출력
			cout << st.size() << "\n";
			break;
		case 4: //비어있으면 1 아니면 0
			if (st.empty())
			{
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
			break;
		case 5: //스택 맨 위 출력 없으면 -1
			if (st.empty())
			{
				cout << "-1\n";
			}
			cout << st.top() << "\n";
			break;
		}
	}
	return 0;
}