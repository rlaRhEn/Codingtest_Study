#include<iostream>
#include<string>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int trying;

	cin >> trying;

	for (int i = 0; i < trying; i++) // 테스트 시행횟수 반복
	{
		int repeat;
		
		string str;
		
		cin >> repeat >> str;
		for (int j = 0; j < str.length(); j++) //전체 반복
		{
			for (int k = 0; k < repeat; k++) //같은거 반복
			{
				cout << str[j];
			}
		}
		cout << '\n';
	}

	return 0;
}