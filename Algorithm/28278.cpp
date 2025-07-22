#include<iostream>

using namespace std;

const int SIZE = 1000;

//1 X: 정수 X를 스택에 넣는다. (1 ≤ X ≤ 100, 000)
//2 : 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다.없다면 -1을 대신 출력한다.
//3 : 스택에 들어있는 정수의 개수를 출력한다.
//4 : 스택이 비어있으면 1, 아니면 0을 출력한다.
//5 : 스택에 정수가 있다면 맨 위의 정수를 출력한다.없다면 -1을 대신 출력한다.

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

	int trying; //명령 횟수
	int command; //명령

	Stack s;
	cin >> trying;
	for (int i = 0; i < trying; i++)
	{
		cin >> command;
		switch (command)
		{
		case 1: //스택 쌓기
			int pushNum;
			cin >> pushNum;
			s.Push(pushNum);
			break;
		case 2: //Pop 이후 그 값 출력 없으면 -1
			s.Pop();
			break;
		case 3: // 스택갯수 출력
			s.StackSize();
			break;
		case 4: //비어있으면 1 아니면 0
			s.PrintEmpty();
			break;
		case 5: //스택 맨 위 출력 없으면 -1
			s.PrintTop();
			break;
		}
	}
	return 0;
}