#include<iostream>
#include<queue>
using namespace std;

int island[50][50];
bool visited[50][50];
int dx[] = { 0, 0, -1, 1 };
int dy[] = { 1, -1, 0, 0 };
int cnt = 0;
int w, h;

void bfs(int a, int b)
{
	if (visited[a][b])
		return;
	queue<pair<int, int>> q;
	q.push(make_pair(a, b));
	cnt++;
	while (!q.empty())
	{
		int x, y;
		x = q.front().first;
		y = q.front().second;
		q.pop();
		if (island[x][y] == 1)
		{
			for (int i = 0; i < 4; i++)
			{
				int nx = x + dx[i];
				int ny = y + dy[i];
				if (nx >= 0 && nx < w)
					if (ny >= 0 && ny < h)
					{
						visited[nx][ny] = true;
						q.push(make_pair(nx, ny));
					}
			}
		}
		
	}
}
int main()
{
	while (1)
	{
		cin >> w >> h;
		//if (w == 0 && h == 0)
		//	break;
		//for (int i = 0; i < h; i++)
		//{
		//	for (int j = 0; j < w; j++)
		//	{
		//		cin >> island[h][w];
		//	}
		//}
		//for (int i = 0; i < h; i++)
		//	for (int j = 0; j < w; j++)
		//		bfs(i, j);
		//cout << cnt << '\n';
		//cnt = 0;
	}
	return 0;
}