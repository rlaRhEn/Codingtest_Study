#include<iostream>

using namespace std;


void func(int a, int b, int n)
{
	if (n == 1)
	{
		cout << a << ' ' << b << '\n';
		return;
	}
	func(a, 6 - a - b, n - 1);
	cout << a << ' ' << b << '\n';
	func(6 - a - b, b, n - 1);
}

int main(void)
{


	return 0;
}