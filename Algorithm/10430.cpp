#include<iostream>

using namespace std;
//ù° �ٿ� (A+B)%C, ��° �ٿ� ((A%C) + (B%C))%C, ��° �ٿ� (A��B)%C, ��° �ٿ� ((A%C) �� (B%C))%C�� ����Ѵ�.
int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;

	cout << (a + b) % c << '\n';
	cout << ((a % c) + (b % c)) % c << '\n';
	cout << (a * b) % c << '\n';
	cout << ((a % c) * (b % c)) % c << '\n';

	return 0;
}