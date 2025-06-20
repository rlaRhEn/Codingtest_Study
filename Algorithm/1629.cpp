#include<iostream>

using namespace std;

long long Pow(long long a, long long b, long long m)
{
	if (b == 1) return a % m;
	long long val = Pow(a, b/2, m);
	val = val * a % m;
	if (b % 2 == 0) return val;
	return val * a % m;

}

int main(void)
{
	ios::sync_with_stdio;
	cin.tie(nullptr);

	long long a, b, c;
	cin >> a >> b >> c;
	cout << Pow(a, b, c);
	return 0;
}