#include<iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n; //�׽�Ʈ ����Ƚ��
	int a, b; //�� �� ���ϱ�

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		cout << a + b << "\n";
	}


	return 0;
}