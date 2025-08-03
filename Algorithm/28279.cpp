#include<iostream>
#include<deque>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	deque<int> dq;

	int trying; //���Ƚ��
	cin >> trying;
	while (trying > 0)
	{
		int command; //��ɾ�
		cin >> command; 

		if (command == 1)//front push
		{
			int num;
			cin >> num;
			dq.push_front(num);
		}
		else if (command == 2)//back push
		{
			int num;
			cin >> num;
			dq.push_back(num);
		}
		else if (command == 3)//front pop���
		{
			if (dq.empty())
			{
				cout << "-1\n";
			}
			else {
				cout << dq.front() << '\n';
				dq.pop_front();
			}
			
		}
		else if (command == 4)//back pop���
		{
			if (dq.empty())
			{
				cout << "-1\n";
			}
			else {
				cout << dq.back() << '\n';
				dq.pop_back();
			}
			
		}
		else if (command == 5)// dq����Ȯ��
		{
			cout << dq.size() << '\n';
		}
		else if (command == 6) //����ִ��� Ȯ��
		{
			if (dq.empty())
			{
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else if (command == 7)// front ���
		{
			if (dq.empty())
			{
				cout << "-1\n";
			}
			else {
				cout << dq.front() << '\n';
			}
			
		}
		else if (command == 8)// back ���
		{
			if (dq.empty())
			{
				cout << "-1\n";
			}
			else {
				cout << dq.back() << '\n';
			}
		}
		trying--;
	}

	return 0;
}