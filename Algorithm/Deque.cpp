#include <iostream>

using namespace std;

const int MX = 1000005;
int dequeArray[2*MX+1]; //덱은 중간에서부터 시작
int head = MX, tail = MX;


void Push_front(int x)
{
	dequeArray[--head] = x;
}
void Push_back(int x)
{
	dequeArray[tail++] = x;
}
void Pop_front()
{
	head++;
}
void Pop_back()
{
	tail--;
}
int front()
{
	return dequeArray[head];
}
int back()
{
	return dequeArray[tail-1];
}
int main()
{

}