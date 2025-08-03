#include<iostream>
#include<deque>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	deque<int> dq;

	int size;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		int num;
		cin >> num;
		dq.push_back(num);
	}
	if (!dq.empty())
	{
		//��÷���� 1�� ǳ�� ��Ʈ����
		int eraserNum = dq.front();
		dq.erase(dq.begin()+dq.front());
		cout <<  eraserNum<< '\n'; //�迭 ��ȣ ���
		for (int i = 0; i < dq.size(); i++)
		{
			int temp = dq[eraserNum]; // temp  = -3
			dq.erase(dq.begin() + temp);
			eraserNum = temp;
			cout << temp << ' ';
		}
	}



	return 0;
}