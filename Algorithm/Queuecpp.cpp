#include<iostream>

using namespace std;

const int MX = 10005;
int queueArray[MX];
int head = 0, tail = 0;


//�������� ���� �� QueueƯ���� ���������� ��� �̵� �޸� ���� ������ �������� ���� �� �޸� ���� ������, �������� ���� �� tail,head 0���� ����� 
void Push(int x)
{
	queueArray[tail] = x;
	tail++;

	//queueArray[tail++] = x;
}
void Pop()
{
	head++;
}
int Front()
{
	return queueArray[head];
}
int Back()
{
	return queueArray[tail-1];
}

int main(void)
{

}

