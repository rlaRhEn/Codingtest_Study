#include<queue>
#include<iostream>

using namespace std;

int main(void)
{
	queue<int> Q;

	Q.push(10); //10
	Q.push(20); //10 20
	Q.push(30); //10 20 30

	cout << Q.size() << endl; //3
	if (Q.empty())
	{
		cout << "Q is Empty\n";
	}
	else cout << "Q is not Empty\n"; //���
	Q.pop(); // 20 30
	cout << Q.front() << '\n'; //20
	cout << Q.back() << '\n'; //30
	Q.push(40); // 20 30 40
	Q.pop(); //30 40
	cout << Q.front() << '\n'; //30
}