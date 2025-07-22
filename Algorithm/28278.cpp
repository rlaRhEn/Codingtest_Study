#include<iostream>

using namespace std;

const int SIZE = 1000;

//1 X: ���� X�� ���ÿ� �ִ´�. (1 �� X �� 100, 000)
//2 : ���ÿ� ������ �ִٸ� �� ���� ������ ���� ����Ѵ�.���ٸ� -1�� ��� ����Ѵ�.
//3 : ���ÿ� ����ִ� ������ ������ ����Ѵ�.
//4 : ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
//5 : ���ÿ� ������ �ִٸ� �� ���� ������ ����Ѵ�.���ٸ� -1�� ��� ����Ѵ�.

class Stack {
public:
	int stack[SIZE];
	int top = 0;

public:
	void Push(int x)//1
	{
		stack[top++] = x;
	}
	void Pop()//2
	{
		if (!IsEmpty())
		{
			cout << stack[--top] << "\n";
		}
		else cout << "-1\n";
	}
	void StackSize()//3
	{
		cout << top << '\n';
	}
	void PrintEmpty()//4
	{
		cout << (IsEmpty() ? "1\n" : "0\n");
	}
	void PrintTop()//5
	{
		if (!IsEmpty())
		{
			cout << stack[top-1] << "\n";
		}
		else cout << "-1\n";

	}

	bool IsEmpty()
	{
		return top == 0;
	}
};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int trying; //��� Ƚ��
	int command; //���

	Stack s;
	cin >> trying;
	for (int i = 0; i < trying; i++)
	{
		cin >> command;
		switch (command)
		{
		case 1: //���� �ױ�
			int pushNum;
			cin >> pushNum;
			s.Push(pushNum);
			break;
		case 2: //Pop ���� �� �� ��� ������ -1
			s.Pop();
			break;
		case 3: // ���ð��� ���
			s.StackSize();
			break;
		case 4: //��������� 1 �ƴϸ� 0
			s.PrintEmpty();
			break;
		case 5: //���� �� �� ��� ������ -1
			s.PrintTop();
			break;
		}
	}
	return 0;
}