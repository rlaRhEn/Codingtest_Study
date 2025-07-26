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

	for (int i = 1; i <= n; i++) //카드 채우기
	{
		que.push(i);
	}
	for (int i = 0; i < n-1; i++)
	{
		
		//맨 앞 빼고
		que.pop();
		//맨앞에있는걸 맨 뒤로 보냄 23456 34562
		que.push(que.front());
		que.pop();
	
	}
	cout << que.front();
	return 0;
}