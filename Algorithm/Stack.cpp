#include<iostream>

using namespace std;
//Stack ����

const int MX = 1000005;
int stackArray[MX]; //����
int pos = 0; //��ġ

void Push(int x)
{
	stackArray[pos] = x;
	pos++;

	//dat[pos++] = x;

}
void Pop() //������ ���� push������ ������ ���Ŀ� ���� ���� ���� �� �ʿ� X
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

