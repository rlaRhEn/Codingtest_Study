#include<iostream>

using namespace std;

//������ �� ������ ���ݰ� ����
//������ ���ǵ��� �� �ݾ�
//�� ����, ������ ������ ���ݰ� ������ ����� �� �ݾ��� �������� ���� �� �ݾװ� ��ġ�ϴ��� �˻��غ���.

int main(void)
{
	int price; //������ ����
	int n; //���� ����
	int a, b; // a ���� ����, b ����
	int total = 0; //
	cin >> price >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		total += a * b;
	}

	if (total == price)
	{
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	return 0;
}
