#include<iostream>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int size; //�迭 ũ��
	int x;  //���� x
	int num; //�迭�� �� ����
	

	cin >> size >> x;

	int* array = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> num;
		array[i] = num;
	}


	for (int i = 0; i < size; i++)
	{
		if (array[i] < x)
		{
			cout << array[i] << " ";
		}
	}


	return 0;
}
