#include<iostream>
#include<string>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int trying;

	cin >> trying;

	for (int i = 0; i < trying; i++) // �׽�Ʈ ����Ƚ�� �ݺ�
	{
		int repeat;
		
		string str;
		
		cin >> repeat >> str;
		for (int j = 0; j < str.length(); j++) //��ü �ݺ�
		{
			for (int k = 0; k < repeat; k++) //������ �ݺ�
			{
				cout << str[j];
			}
		}
		cout << '\n';
	}

	return 0;
}