#include<iostream>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num;
	int sum = 0;

	
	
	cin >> num;
	char* c = new char[num];

	for (int i = 0; i < num; i++)
	{
		cin >> c[i];

		char n = c[i] - '0';
		sum += n;
	}
	cout << sum << '\n';
	
	

	return 0;
}

/// <summary>
/// �ƽ�Ű�ڵ� ���� ��Ÿ���Ƿ� ���� 0�� ���ֵ����Ѵ�
/// </summary>
/// <param name=""></param>
/// <returns></returns>
