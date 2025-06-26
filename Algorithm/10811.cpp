#include<iostream>
#include<algorithm>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int number;
	int trying;
	int k, m;

	cin >> number >> trying;
	int* basket = new int[number];

	for (int i = 0; i < number; i++) //상자 번호부여
	{
		basket[i] = i + 1;
	}

	for (int i = 0; i < trying; i++)
	{
		cin >> k >> m;
		reverse(basket+k-1, basket+m);
	}
	for (int i = 0; i < number; i++)
	{
		cout << basket[i] << " ";
	}

	return 0;
}