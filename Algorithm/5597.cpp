#include<iostream>

using namespace std;

const int SIZE = 30;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	int student[SIZE];

	int num;

	for (int i = 0; i < SIZE; i++) 
	{
		student[i] = i + 1; //1~30 ��ȣ �ο�
	}

	for (int i = 0; i < 28; i++) //�⼮üũ
	{
		cin >> num;

		student[num-1] = 0;
	}

	for (int i = 0; i < SIZE; i++) //�Ἦ�� Ȯ��
	{
		if (student[i] != 0)
		{
			cout << student[i] << "\n";
		}
	}



	return 0;
}