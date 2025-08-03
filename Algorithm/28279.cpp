#include<iostream>
#include<deque>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	deque<int> dq;

	int trying; //명령횟수
	cin >> trying;
	while (trying > 0)
	{
		int command; //명령어
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
		else if (command == 3)//front pop출력
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
		else if (command == 4)//back pop출력
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
		else if (command == 5)// dq갯수확인
		{
			cout << dq.size() << '\n';
		}
		else if (command == 6) //비어있는지 확인
		{
			if (dq.empty())
			{
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else if (command == 7)// front 출력
		{
			if (dq.empty())
			{
				cout << "-1\n";
			}
			else {
				cout << dq.front() << '\n';
			}
			
		}
		else if (command == 8)// back 출력
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