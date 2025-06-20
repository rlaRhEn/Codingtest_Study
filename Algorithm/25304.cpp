#include<iostream>

using namespace std;

//구매한 각 물건의 가격과 개수
//구매한 물건들의 총 금액
//을 보고, 구매한 물건의 가격과 개수로 계산한 총 금액이 영수증에 적힌 총 금액과 일치하는지 검사해보자.

int main(void)
{
	int price; //영수증 가격
	int n; //물건 종류
	int a, b; // a 물건 가격, b 갯수
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
