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
/// 아스키코드 값이 나타나므로 정수 0을 빼주도록한다
/// </summary>
/// <param name=""></param>
/// <returns></returns>
