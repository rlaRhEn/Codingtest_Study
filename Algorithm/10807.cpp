#include<iostream>

using namespace std;

const int SIZE = 10;
/// <summary>
/// ù° �ٿ� ������ ���� N(1 �� N �� 100)�� �־�����. ��° �ٿ��� ������ �������� ���еǾ����ִ�. ��° �ٿ��� ã������ �ϴ� ���� v�� �־�����. 
/// �Է����� �־����� ������ v�� -100���� ũ�ų� ������, 100���� �۰ų� ����.
/// </summary>
/// <param name=""></param>
/// <returns></returns>
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int size; //�迭 ũ��
	int num; //���� �ֱ�
	int findNum; //ã������ ����
	int cnt = 0; //ã������ ���� ī��Ʈ
	 

	cin >> size; //1. �迭 ũ�� �Է�

	int* array = new int[size]; //�����Ҵ� �迭

	for (int i = 0; i < size; i++) //2. �迭�� ���ڳֱ�
	{
		cin >> num;
		array[i] = num;
	}

	cin >> findNum;

	for (int i = 0; i < size; i++) //3. �迭���� ���� ã��
	{
		if (array[i] == findNum)
		{
			cnt++;
		}
	}

	cout << cnt << '\n';
	return 0;
}
