#include<iostream>

using namespace std;


void ChanageBasket(int* array, int m, int n);

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int basketSize; //�迭ũ��
	int trying; //����Ƚ��

	int m, n; //���� ��ȯ


	cin >> basketSize >> trying;
	int* basket = new int[basketSize];
	
	for (int i = 0; i < basketSize; i++) //�ٱ��� ������� ���� ä���
	{
		basket[i] = i + 1;
	}
	
	for (int i = 0; i < trying; i++) //
	{
		cin >> m >> n;
		ChanageBasket(basket, m-1, n-1);

	}

	for (int i = 0; i < basketSize; i++) //�ٱ��� ������� ���� ä���
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