#include<iostream>

using namespace std;



int main(void)
{
	int a, b; //입력 받는 두 정수
	int time; //테스트 시행 횟수

	cin >> time;
	for (int i = 0; i < time; i++)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}
	return 0;
}
