#include<iostream>
#include<algorithm>
using namespace std;


/// <summary>
/// max_element(), static_cast<double>()
/// </summary>
/// <param name=""></param>
/// <returns></returns>

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int subjectNum; //���񰹼�
	double total = 0; //������ ��
	double average = 0; //���

	cin >> subjectNum;
	int* subjectScore = new int[subjectNum];

	for (int i = 0; i < subjectNum; i++)
	{
		int score;
		cin >> score;
		subjectScore[i] = score;

	}
	int max = *max_element(subjectScore, subjectScore + subjectNum); //�ִ밪 m
	for (int i = 0; i < subjectNum; i++)
	{
		total += static_cast<double>(subjectScore[i])/ max * 100;
	}
	average = total / subjectNum;

	cout << average << '\n';
	return 0;
}