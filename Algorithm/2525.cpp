#include<iostream>

using namespace std;

/// <summary>
/// 23���� �� 2�ð� ���� �� ���ǹ� ����, �������� �����⳪ �������� ī����
/// </summary>
/// <param name=""></param>
/// <returns></returns>

int main(void)
{
	int hour, min; //���� �ð�
	int endHour, endMin; // �Ϸ� �ð�
	int cookTime; //�ɸ��� �ð�
	int cnt;

	cin >> hour >> min;
	cin >> cookTime;;

	if ((min + cookTime) >= 60)
	{
		
		endMin = (min + cookTime) % 60;
		cnt = (min + cookTime) / 60;
		endHour = hour + cnt;
		if (endHour > 23)
		{
			endHour = endHour % 24;
		}
	}
	else {
		endHour = hour;
		endMin = min + cookTime;
		
	}
	cout << endHour << " " << endMin;

	return 0;
}