#include<iostream>
#include<queue>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> que;
	
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) //ī�� ä���
	{
		que.push(i);
	}
	for (int i = 0; i < n-1; i++)
	{
		
		//�� �� ����
		que.pop();
		//�Ǿտ��ִ°� �� �ڷ� ���� 23456 34562
		que.push(que.front());
		que.pop();
	
	}
	cout << que.front();
	return 0;
}