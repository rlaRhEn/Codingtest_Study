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
	

	getline(cin, s); //���� ��ü ���
	stringstream ss(s); //���ڿ� s�� ��Ʈ��ó�� �ٲ���
	string word;
	while (ss >> word) //���� ������ �ܾ� �ϳ��� word�� ����
	{
		counting++; //�ܾ�� ī����
	}
	cout << counting;

	return 0;
}