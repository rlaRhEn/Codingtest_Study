#include<iostream>

using namespace std;

const int MX = 10000;
class Deque {

private:
	int head, tail;
	int DequeArray[2*MX+1];
public:
	Deque() {head = tail = MX; }

	void Push_front(int x)
	{
		DequeArray[--head] = x;
	}
	
	void Push_back(int x)
	{
		DequeArray[tail++] = x;
	}

	void Pop_front()
	{
		if (tail - head == 0) cout << -1 << endl;
		else cout << DequeArray[head++] << endl;
	}

	void Pop_back()
	{
		if (tail - head == 0) cout << -1 << endl;
		else cout << DequeArray[--tail] << endl;
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
		if (tail - head == 0) cout << -1 << endl;
		else cout << DequeArray[head] << endl;
	}

	void Back()
	{
		if (tail - head == 0) cout << -1 << endl;
		else cout << DequeArray[tail-1] << endl;
	}

};

int main(void)
{


	return 0;
}
