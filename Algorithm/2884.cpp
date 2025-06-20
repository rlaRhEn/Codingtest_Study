#include<iostream>

using namespace std;



int main(void)
{
	int hour, min;

	cin >> hour >> min;

	if (min - 45 < 0)
	{
		--hour;
		min = (min + 60) - 45;
		if (hour < 0)
		{
			hour = 23;
		}
	}
	else {
		min = min - 45;
	}

	cout << hour << " " << min << endl;

	return 0;
}
