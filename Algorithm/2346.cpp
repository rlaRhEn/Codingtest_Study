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
		//맨첨음에 1번 풍선 터트리고
		int eraserNum = dq.front();
		dq.erase(dq.begin()+dq.front());
		cout <<  eraserNum<< '\n'; //배열 번호 출력
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