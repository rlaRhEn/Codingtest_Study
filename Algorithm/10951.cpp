#include<iostream>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b; //�� ����

	while (cin >> a >> b)
	{
		cout << a + b << '\n';
	}

	return 0;
}
