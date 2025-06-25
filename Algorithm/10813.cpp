#include<iostream>

using namespace std;


void ChanageBasket(int* array, int m, int n);

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int basketSize; //배열크기
	int trying; //시행횟수

	int m, n; //숫자 교환


	cin >> basketSize >> trying;
	int* basket = new int[basketSize];
	
	for (int i = 0; i < basketSize; i++) //바구니 순번대로 숫자 채우기
	{
		basket[i] = i + 1;
	}
	
	for (int i = 0; i < trying; i++) //
	{
		cin >> m >> n;
		ChanageBasket(basket, m-1, n-1);

	}

	for (int i = 0; i < basketSize; i++) //바구니 순번대로 숫자 채우기
	{
		cout << basket[i] << " ";
	}

	return 0;
}
void ChanageBasket(int* array, int m, int n)
{
	int temp;
	temp = array[m];
	array[m] = array[n];
	array[n] = temp;

}