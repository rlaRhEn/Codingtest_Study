#include<iostream>

using namespace std;
//Stack 구현

const int MX = 1000005;
int stackArray[MX]; //스택
int pos = 0; //위치

void Push(int x)
{
	stackArray[pos] = x;
	pos++;

	//dat[pos++] = x;

}
void Pop() //어차피 새로 push들어오는 값으로 추후에 변경 굳이 삭제 할 필요 X
{
	pos--;
}
int Top()
{
	return stackArray[pos - 1];
}

void Test()
{

}

int main()
{
	Test();

	return 0;
}

