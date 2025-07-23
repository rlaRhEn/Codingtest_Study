#include<iostream>
#include<queue>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> que;

	int n;
    cin >> n;
	while (n--)
	{
		string command;
		cin >> command;
        if (command == "push") {
            int x; cin >> x;
            que.push(x);
        }
        else if (command == "pop") {
            if (que.empty())
            {
                cout << "-1\n";
            }

            else { cout << que.front() << "\n"; que.pop(); }
        }
        else if (command == "size") {
            cout << que.size() << "\n";
        }
        else if (command == "empty") {
            cout << (que.empty() ? 1 : 0) << "\n";
        }
        else if (command == "front")
        {
            if (que.empty())
            {
                cout << "-1\n";
            }
            else cout << que.front() << "\n";
        }
        else if (command == "back") {
            if (que.empty())
            {
                cout << "-1\n";
            }

            else cout << que.back() << "\n";
        }

	}

	return 0;
}