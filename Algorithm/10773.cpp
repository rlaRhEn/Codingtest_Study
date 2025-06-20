#include<iostream>
#include<string>

using namespace std;

const int MX = 100000;

class Stack {
private:
	long long stackArray[MX];
	int pos;

public:
	Stack () : pos(0){ }
	void Push(int x)
	{
		stackArray[pos++] = x;
	}
	void Pop()
	{
		if(pos > 0) pos--;
	}
	long long Sum()
	{
		long long sum = 0;
		for (int i = 0; i < pos; i++)
		{
			sum += stackArray[i];
		}
		return sum;
	}
};

int main(void)
{
	ios::sync_with_stdio;
	cin.tie(nullptr);
	int k;
	
	Stack stack;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int num;
		cin >> num;
		if (num == 0) stack.Pop();
		else stack.Push(num);
	}
	cout << stack.Sum() << endl;

	return 0;
}