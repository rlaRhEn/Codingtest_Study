#include<iostream>

using namespace std;



int main(void)
{
	int since;

	cin >> since;

	if (since % 4 == 0 )
	{
		if (since % 100 != 0 || since % 400 == 0)
		{
			cout << "1" << endl;
		}
		else {
			cout << "0\n";
		}
		
	}
	else {
		cout << "0\n";
	}

	return 0;
}
