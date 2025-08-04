#include<iostream>
#include<queue>
using namespace std;

#define X first
#define Y second

int board[501][501] = {};
bool vis[501][501];
int n, m;

int dx[4] = {1, 0, -1, 0}; //��
int dy[4] = {0, 1, 0, -1};  //��

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
		}
	}
	int mx = 0;  //�׸��� �ִ밪
	int num = 0; //�׸��� ��
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 0 || vis[i][j]) continue;
			num++;
			queue<pair<int, int>> que;
			vis[i][j] = 1;
			que.push({ i,j });
			int area = 0;

			while (!que.empty())
			{
				area++;
				pair<int, int> cur = que.front(); que.pop();
				for (int dir = 0; dir < 4; dir++)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
					if (vis[nx][ny] || board[nx][ny] != 1) continue;
					vis[nx][ny] = 1;
					que.push({ nx,ny });
				}
			}
			mx = max(mx, area);
		}
		
		cout << num << "\n" << mx;
	}
	
	


	return 0;
}