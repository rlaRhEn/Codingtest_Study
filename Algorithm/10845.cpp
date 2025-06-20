#include<iostream>

using namespace std;

const int MX = 100000;

class Queue {

private:
	int queueArray[MX];
	int head, tail;

public:
	Queue() :head(0), tail(0) {}
	void Push(int x)
	{
		queueArray[tail++] = x;
	}
	
	void Pop()
	{
		cout << (tail - head == 0 ? -1 : queueArray[head++]) << endl;
	}

	void Size()
	{
		cout << tail - head << endl;
	}

	void Empty()
	{
		cout << (tail - head == 0 ? 1 : 0) << endl;
	}

	void Front()
	{
		cout << (tail - head == 0 ? -1 : queueArray[head]) << endl;
	}

	void Back()
	{
		cout << (tail - head == 0 ? -1 : queueArray[tail-1]) << endl;
	}

};


int main(void)
{


	return 0;
}