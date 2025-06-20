#include<iostream>

using namespace std;

/// <summary>
/// 23시일 때 2시간 증가 시 조건문 부족, 빼지말고 나누기나 나머지로 카운팅
/// </summary>
/// <param name=""></param>
/// <returns></returns>

int main(void)
{
	int hour, min; //현재 시각
	int endHour, endMin; // 완료 시간
	int cookTime; //걸리는 시간
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