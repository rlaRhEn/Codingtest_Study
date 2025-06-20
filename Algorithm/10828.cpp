#include<iostream>
#include<string>
using namespace std;


const int MX = 10000;



class Stack
{
private:
	int stackArray[MX];
	int pos;

public:
	Stack() : pos(0){}
	void Push(int x);
	void Pop();
	void Size();
	void Empty();
	void Top();

};


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	Stack stack;
	string cmd;

	for (int i = 0; i < n; ++i)
	{
		cin >> cmd;
		if (cmd == "push")
		{
			int x;
			cin >> x;
			stack.Push(x);
		}
		else if (cmd == "pop") stack.Pop();
		else if (cmd == "size") stack.Size();
		else if (cmd == "empty") stack.Empty();
		else if (cmd == "top") stack.Top();
	}

	return 0;
}

void Stack::Push(int x)
{
	stackArray[pos++] = x;
}
void Stack::Pop()
{
	if (pos <= 0)
	{
		cout << "-1\n";
		pos = 0;
	}
	else
	{
		cout << stackArray[--pos] << '\n';
	}

}
void Stack::Size()
{
	cout << pos << '\n';
}
void Stack::Empty()
{
	cout << ((pos == 0) ? 1 : 0) << '\n';
}
void Stack::Top()
{
	if (pos == 0) cout << -1 << '\n';
	else cout << stackArray[pos - 1] << '\n';
}
