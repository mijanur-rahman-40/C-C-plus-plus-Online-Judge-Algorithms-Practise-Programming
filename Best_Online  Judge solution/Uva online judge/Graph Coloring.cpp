#include<bits/stdc++.h>
using namespace std;
#define MAX 100+10
int G[MAX][MAX], color[MAX], ans[MAX];
int n, k, _max;
void Creat_Graph()
{
	int i = 0, a = 0, b = 0;
	cin >> n >> k;
	for (i = 0; i <k; i++)
	{
		cin >> a >> b;
		G[a][b] = 1;
		 G[b][a] = 1;
	}
}

int judge(int cur)
{
	for (int i = 1; i <= n; i++)
	{
		if (G[i][cur] && color[i])
			return 0;
	}
	return 1;
}

void dfs(int cur)
{
	int i = 0, j = 0;
	if (cur > n)
	{
		int count = 0;
		for(i = 1; i <= n; i++)
			if (color[i])
				count++;
		if (count > _max)
		{
			_max = count;
			for (i = 1, j = 0; i <= n; i++)
				if (color[i])
					ans[j++] = i;
		}
		return;
	}
	else
	{
		color[cur] = 0;
		dfs(cur+1);
		color[cur] = 1;
		if (judge(cur))
			dfs(cur+1);
		color[cur] = 0;
	}
}

int main()
{
#ifdef Local
	freopen("a.in", "r", stdin);
	freopen("a.out", "w", stdout);
#endif
	int t = 0, i = 0;
	cin >> t;
	while (t--)
	{
		memset(G, 0, sizeof(G));
		memset(color, 0, sizeof(color));
		memset(ans, 0, sizeof(ans));
		_max = 0;
		Creat_Graph();
		dfs(1);
		cout <<_max <<endl;
		for (i = 0; i <_max; i++)
		{
			if (i != _max - 1)
				cout <<ans[i] <<' ';
			else
				cout <<ans[i];
		}
		cout <<endl;
	}
}
