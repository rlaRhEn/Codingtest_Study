#include<iostream>
#include<string>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	

	string s;

	while (getline(cin, s)) // 공백을 포함
	{
		cout << s << '\n'; //EOF될 떄 까지 출력
;	}
	return 0;
}