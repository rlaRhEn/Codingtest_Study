#include<iostream>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n; //�׽�Ʈ ����Ƚ��
	int a, b; // ���� a,b

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n";
	}

	return 0;
}