#include<iostream>
#include<limits>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int max = numeric_limits<int>::min(); //최소값으로 만들어놓기
	int min = numeric_limits<int>::max(); //최대값으로 만들어놓기
	//최대, 최소
	int size; //배열 사이즈
	int x; //정수
	
	cin >> size;
	int* array = new int[size];

	
	for (int i = 0; i < size; i++) //배열에 숫자넣기
	{ 
		cin >> x;
		array[i] = x;
		
		if (array[i] >= max)
		{
			max = array[i];
		}
		if(array[i] < min)
		{
			min = array[i];
		}
	}
	cout << min << " " << max << '\n';
	return 0;
}
