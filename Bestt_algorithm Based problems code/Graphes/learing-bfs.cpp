#include <cstdio>
#include <map>
#include <list>
#include <queue>
using namespace std;
map<int, list<int> > nodes;
int color[200];
bool bfs()
{
  queue<int> q;
  q.push(0);
  color[0] = 0;
  while (!q.empty()) {
    int n = q.front();
    q.pop();
    for (list<int>::iterator it = nodes[n].begin(); it != nodes[n].end(); ++it)
      if (color[*it] == -1) {
        color[*it] = 1 - color[n];
        q.push(*it);
      } else if (color[*it] == color[n])
        return false;
  }
  return true;
}
int main()
{
  int caseno = 0, n, l, a, b;

  while (++caseno && scanf("%i%i", &n, &l) == 2 && n > 0)
  {
    nodes.clear();
    fill(color, color + n, -1);

    for (int i = 0; i < l; i++)
    {
      scanf("%i%i", &a, &b);
      nodes[a].push_back(b);
      nodes[b].push_back(a);
    }

    if (bfs())
      printf("BICOLORABLE.\n");
    else
      printf("NOT BICOLORABLE.\n");
  }
  return 0;
}
