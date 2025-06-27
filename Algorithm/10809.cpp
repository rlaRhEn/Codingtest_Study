#include<iostream>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);


	string s;

	int alphabet[26];

	fill_n(alphabet, 26, -1);

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		int index = s[i] - 'a';
		if (alphabet[index] == -1)
		{
			alphabet[index] = i;
		}
		
	}


	for (int i = 0; i < 26; i++)
	{
		cout << alphabet[i] << " ";
	}
	return 0;
}