#include<iostream>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n; //테스트 시행횟수
	int a, b; // 정수 a,b

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << "\n";
	}

	return 0;
}