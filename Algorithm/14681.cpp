#include<iostream>

using namespace std;



int main(void)
{
	int x, y;

	cin >> x >> y;

	if (x > 0 && y > 0 ) // 1사분면 x > 0, y > 0
	{
		cout << "1\n";
	}
	else if (x < 0 && y > 0) // 2사분면 x < 0, y > 0
	{
		cout << "2\n";
	}
	else if (x < 0 && y < 0) // 3사분면 x < 0, y < 0
	{
		cout << "3\n";
	}
	else if (x > 0 && y < 0) // 2사분면 x > 0, y < 0
	{
		cout << "4\n";
	}
	return 0;
}
