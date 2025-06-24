#include<iostream>
#include<limits>
using namespace std;

const int SIZE = 9;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int max = numeric_limits<int>::min();
	int pos;
	int array[SIZE]; //배열
	int x; //정수

	for (int i = 0; i < SIZE; i++)
	{
		cin >> x;
		array[i] = x;
		if (array[i] >= max)
		{
			max = array[i];
			pos = i+1;
		}
	}

	cout << max << '\n' << pos << '\n';
	return 0;
}
