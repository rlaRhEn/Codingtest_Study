#include<iostream>
#include<algorithm>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int basketSize; //�ٱ��� ������
	int trying; //����Ƚ��

	int j; //j�� �ٱ���
	int k; //k�� �ٱ���
	int num; //�� ����


	cin >> basketSize >> trying; //�ٱ��� ������ ����Ƚ��
	int* basket = new int[basketSize];

	fill(basket, basket + basketSize, 0);
	for (int i = 0; i < trying; i++)
	{
		cin >> j >> k >> num; // j�� �ٱ��Ϻ��� k�� �ٱ��ϱ��� ��num�� �־��

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