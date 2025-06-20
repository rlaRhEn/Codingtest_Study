#include<iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n; //테스트 시행횟슈
	int a, b; //두 수 더하기

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		cout << a + b << "\n";
	}


	return 0;
}