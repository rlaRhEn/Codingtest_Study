#include<iostream>

using namespace std;


//��� VS �ݺ���
void Func1(int n)
{
	if (n == 0) return;
	cout << n << ' ';
	Func1(n - 1);
}

long long fun1(int a, int b, int m)
{
	long val = 1;
	while (b--) val = val * a % m;
	return val;
}