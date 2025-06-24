#include<iostream>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b; // µÎ Á¤¼ö
	
	
	while(true)
	{
		cin >> a >> b;
		if (a != 0 && b != 0)
		{
			cout << a + b << "\n";
			continue;
		}
		break;
	}
	return 0;
}
