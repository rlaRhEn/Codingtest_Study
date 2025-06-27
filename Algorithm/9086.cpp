#include<iostream>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int test;//테스트시행횟수
	
	string s;
	
	cin >> test;

	for (int i = 0; i < test; i++)
	{
		cin >> s;

		cout << s.front() << s.back() << "\n";
	}

	


	return 0;
}