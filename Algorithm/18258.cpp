#include<iostream>

using namespace std;

const int SIZE = 2000000;

class Queue {
	int front = 0, back = 0; // 맨 앞 맨 뒤
	int queueArray[SIZE];

public:
	void push(int n)
	{
		queueArray[back++] = n;
	}
	void pop()
	{
		if (!empty())
		{
			cout << queueArray[front++] << "\n";
		}
		else {
			cout << "-1\n";
		}
	}
	void size()
	{
		cout << back - front << endl;
	}
	bool empty()
	{
		if (back - front == 0)
		{
			return true;
		}
		else {
			return false;
		}
	}
	void Front()
	{
		if(empty())
		{
			cout << "-1\n";
		}
		else {
			cout << queueArray[front] << endl;
		}
		
	}
	void Back()
	{
		if(empty())
		{
			cout << "-1\n";
		}
		else {
			cout << queueArray[back-1] << endl;
		}
	}
};


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int i = 0, trying; //시행횟수
	Queue que;

	
	cin >> trying;
	while (i < trying)
	{
		string command;
		cin >> command;
		
		if (command == "push")
		{
			int x;
			cin >> x;
			que.push(x);
		}
		else if (command == "pop")
		{
			que.pop();
		}
		else if (command == "size")
		{
			que.size();
		}
		else if (command == "empty")
		{
			cout << que.empty() <<"\n";
		}
		else if (command == "front")
		{
			que.Front();
		}
		else if (command == "back")
		{
			que.Back();
		}
		
		i++;
	}

	return 0;
}