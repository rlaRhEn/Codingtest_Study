#include<iostream>
#include<algorithm>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int basketSize; //바구니 사이즈
	int trying; //시행횟수

	int j; //j번 바구니
	int k; //k번 바구니
	int num; //공 숫자


	cin >> basketSize >> trying; //바구니 사이즈 시행횟수
	int* basket = new int[basketSize];

	fill(basket, basket + basketSize, 0);
	for (int i = 0; i < trying; i++)
	{
		cin >> j >> k >> num; // j번 바구니부터 k번 바구니까지 공num을 넣어라

		for (int m = j-1; m < k; m++)
		{
			basket[m] = num;
		}

	}
	for (int i = 0; i < basketSize; i++)
	{
		cout << basket[i] << " ";
	}
	


	return 0;
}