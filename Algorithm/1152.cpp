#include<iostream>
#include <string>
#include<sstream>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	int counting = 0;
	

	getline(cin, s); //한줄 전체 담기
	stringstream ss(s); //문자열 s를 스트림처럼 바꿔줌
	string word;
	while (ss >> word) //공백 단위로 단어 하나씩 word에 추출
	{
		counting++; //단어당 카운팅
	}
	cout << counting;

	return 0;
}