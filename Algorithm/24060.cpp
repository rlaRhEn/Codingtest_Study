#include<iostream>

using namespace std;


int Merge_Sort(int* array, int left, int right)
{

	return Merge_Sort(array, left, right - 1);
}
void SavePoint()
{

}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int size;
	cin >> size;


	int* list = new int[size];


	return 0;
}