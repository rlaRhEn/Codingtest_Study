#include<iostream>
#include<stack>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int trying; //��� Ƚ��
	int command; //���

	stack<int> st;
	cin >> trying;
	for (int i = 0; i < trying; i++)
	{
		cin >> command;
		switch (command)
		{
		case 1: //���� �ױ�
			int pushNum;
			cin >> pushNum;
			st.push(pushNum);
			break;
		case 2: //Pop ���� �� �� ��� ������ -1
			if (st.empty())
			{
				cout << "-1\n";
			}
			else {
				cout << st.top() << "\n";
				st.pop();
			}
			break;
		case 3: // ���ð��� ���
			cout << st.size() << "\n";
			break;
		case 4: //��������� 1 �ƴϸ� 0
			if (st.empty())
			{
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
			break;
		case 5: //���� �� �� ��� ������ -1
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