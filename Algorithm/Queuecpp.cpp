#include<iostream>

using namespace std;

const int MX = 10005;
int queueArray[MX];
int head = 0, tail = 0;


//선형으로 구현 시 Queue특성상 오른쪽으로 계속 이동 메모리 낭비 심해짐 원형으로 구현 시 메모리 낭비 적어짐, 원형으로 구현 시 tail,head 0으로 만들기 
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

