#include<iostream>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	int x; 

	cin >> s >> x;

	char charIndex = s[x-1];
	
	cout << charIndex;

	return 0;
}