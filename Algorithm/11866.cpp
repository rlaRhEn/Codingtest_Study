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
	for (int i = 1; i <= n; i++)//que �迭�����
	{
		que.push(i);
	}
	int k; //�ǳʶٱ�
	cin >> k;
	cout << "<";
	while (!que.empty())
	{
		for (int i = 0; i < k - 1; i++)
		{
			que.push(que.front());
			que.pop();
		}
		cout << que.front();//�����Ұ� ���
		que.pop();//����
		if (!que.empty())
		{
			cout << ", ";
		}
	}
	cout << ">";

	return 0;
}