#include<iostream>

using namespace std;

/// <summary>
/// 굳이 모든 조건문을 만들려하지말고 되는것만 하도록 한다..
/// </summary>
/// <param name=""></param>
/// <returns></returns>

int main(void)
{
	int dice1, dice2, dice3;
	int num; //같은 눈
	int prize;; //상금
	cin >> dice1 >> dice2 >> dice3;

	//조건1 같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다 && 
	if (dice1 == dice2 && dice1 == dice3)
	{
		num = dice1;
		prize = 10000 + (num * 1000);
	}
	//조건2 같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다. ||
	else if (dice1 == dice2 || dice1 == dice3) // => 이 조건문은 성립 불가 3개 다 같을 수 있기에 오류 발생 
	{
		num = dice1;
		prize = 1000 + (num * 100);
	}
	else if (dice2 == dice3)
	{
		num = dice2;
		prize = 1000 + (num * 100);
	}
	//조건3 모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
	else {
		num = (dice1 > dice2) ? dice1 : dice2;
		num = (num > dice3) ? num : dice3;
		prize = num * 100;
	}
	cout << prize << endl;
	return 0;
}
