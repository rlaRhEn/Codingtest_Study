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

	int subjectNum; //과목갯수
	double total = 0; //과목의 합
	double average = 0; //평균

	cin >> subjectNum;
	int* subjectScore = new int[subjectNum];

	for (int i = 0; i < subjectNum; i++)
	{
		int score;
		cin >> score;
		subjectScore[i] = score;

	}
	int max = *max_element(subjectScore, subjectScore + subjectNum); //최대값 m
	for (int i = 0; i < subjectNum; i++)
	{
		total += static_cast<double>(subjectScore[i])/ max * 100;
	}
	average = total / subjectNum;

	cout << average << '\n';
	return 0;
}