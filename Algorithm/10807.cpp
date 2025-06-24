#include<iostream>

using namespace std;

const int SIZE = 10;
/// <summary>
/// 첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다. 둘째 줄에는 정수가 공백으로 구분되어져있다. 셋째 줄에는 찾으려고 하는 정수 v가 주어진다. 
/// 입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.
/// </summary>
/// <param name=""></param>
/// <returns></returns>
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int size; //배열 크기
	int num; //숫자 넣기
	int findNum; //찾으려는 숫자
	int cnt = 0; //찾으려는 숫자 카운트
	 

	cin >> size; //1. 배열 크기 입력

	int* array = new int[size]; //동적할당 배열

	for (int i = 0; i < size; i++) //2. 배열에 숫자넣기
	{
		cin >> num;
		array[i] = num;
	}

	cin >> findNum;

	for (int i = 0; i < size; i++) //3. 배열에서 숫자 찾기
	{
		if (array[i] == findNum)
		{
			cnt++;
		}
	}

	cout << cnt << '\n';
	return 0;
}
