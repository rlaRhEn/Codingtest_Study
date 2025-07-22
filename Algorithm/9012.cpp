#include<iostream>
#include<stack>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int trying;

	cin >> trying;
	while (trying--)
	{
		string s;
		cin >> s;
		stack<char> st;
		bool isValid = true;

		for (char c : s)
		{
			if (c == '(')
			{
				st.push(c);
			}
			else if (c == ')')
			{
				if (st.empty())
				{
					isValid = false;
					break;
				}
				st.pop();
			}
		}
		if (!st.empty()) isValid = false;

		cout << (isValid ? "YES\n" : "NO\n");

	}


	return 0;
}