#include<iostream>

using namespace std;

/// <summary>
/// ���� ��� ���ǹ��� ������������� �Ǵ°͸� �ϵ��� �Ѵ�..
/// </summary>
/// <param name=""></param>
/// <returns></returns>

int main(void)
{
	int dice1, dice2, dice3;
	int num; //���� ��
	int prize;; //���
	cin >> dice1 >> dice2 >> dice3;

	//����1 ���� ���� 3���� ������ 10,000��+(���� ��)��1,000���� ����� �ް� �ȴ� && 
	if (dice1 == dice2 && dice1 == dice3)
	{
		num = dice1;
		prize = 10000 + (num * 1000);
	}
	//����2 ���� ���� 2���� ������ ��쿡�� 1,000��+(���� ��)��100���� ����� �ް� �ȴ�. ||
	else if (dice1 == dice2 || dice1 == dice3) // => �� ���ǹ��� ���� �Ұ� 3�� �� ���� �� �ֱ⿡ ���� �߻� 
	{
		num = dice1;
		prize = 1000 + (num * 100);
	}
	else if (dice2 == dice3)
	{
		num = dice2;
		prize = 1000 + (num * 100);
	}
	//����3 ��� �ٸ� ���� ������ ��쿡�� (�� �� ���� ū ��)��100���� ����� �ް� �ȴ�.
	else {
		num = (dice1 > dice2) ? dice1 : dice2;
		num = (num > dice3) ? num : dice3;
		prize = num * 100;
	}
	cout << prize << endl;
	return 0;
}
