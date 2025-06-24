#include<iostream>
#include<limits>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int max = numeric_limits<int>::min(); //�ּҰ����� ��������
	int min = numeric_limits<int>::max(); //�ִ밪���� ��������
	//�ִ�, �ּ�
	int size; //�迭 ������
	int x; //����
	
	cin >> size;
	int* array = new int[size];

	
	for (int i = 0; i < size; i++) //�迭�� ���ڳֱ�
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
