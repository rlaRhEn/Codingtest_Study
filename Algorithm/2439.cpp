#include<iostream>

using namespace std;


int main(void)
{
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = n-1; j > 0; j--)
		{
			cout << " ";
			
		}
		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}
		
		cout << "\n";
	}
	return 0;
}