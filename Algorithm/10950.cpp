#include<iostream>

using namespace std;



int main(void)
{
	int a, b; //�Է� �޴� �� ����
	int time; //�׽�Ʈ ���� Ƚ��

	cin >> time;
	for (int i = 0; i < time; i++)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}
	return 0;
}
