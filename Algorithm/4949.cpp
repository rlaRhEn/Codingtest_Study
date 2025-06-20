#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio;
	cin.tie(nullptr);

	string line;

	while (true)
	{
		getline(cin, line);
		if (line == ".") break;

		stack<char> s;
		bool balanced = true;

		for (char c : line)
		{
			if (c == '(' || c == '[')
			{
				s.push(c);
			}
			else if ((c == ')'))
			{
				if (s.empty() || s.top() != '(')
				{
					balanced = false;
					break;
				}
				s.pop();
			}
			else if ((c == ']'))
			{
				if (s.empty() || s.top() != '[')
				{
					balanced = false;
					break;
				}
				s.pop();
			}
		}
		if (!s.empty()) balanced = false;

		cout << (balanced ? "yes" : "no") << endl;
	}

	return 0;
}