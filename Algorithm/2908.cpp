#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);



	string s1, s2;
	int num1, num2;
	cin >> s1 >> s2;

	reverse(s1.begin(), s1.end()); 
	reverse(s2.begin(), s2.end());

	num1 = stoi(s1);
	num2 = stoi(s2);

	if (num1 >= num2)
	{
		cout << num1 << "\n";
	}
	else {
		cout << num2 << "\n";
	}

	
	return 0;
}