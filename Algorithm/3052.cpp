#include<iostream>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	bool mod[42] = {false};
	int num;
	int cnt = 0 ; //Ä«¿îÆÃ
	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		int modNum = num % 42;

		if (!mod[modNum])
		{
			mod[modNum] = true;
			cnt++;
		}
	}
	cout << cnt << '\n';

	return 0;
}