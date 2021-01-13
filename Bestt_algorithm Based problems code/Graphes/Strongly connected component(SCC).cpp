#include<stdio.h>
int n, e, mat[100][100], mat2[100][100], visited[100], STK[100], TOP = -1;
void Push(int item)
{
    STK[++TOP] = item;
}
int Pop()
{
    return STK[TOP--];
}
bool isEmpty()
{
    if(TOP == -1)
        return true;
    return false;
}
void DFS(int cur)
{
    int i;
    //printf("%d ", cur);
    for(i=0;i<n;i++)
    {
        if(mat[cur][i] && visited[i] == 0)
        {
            visited[i] = 1;
            DFS(i);
            Push(i);
        }
    }
}
void DFS2(int cur)
{
    int i;
    printf("%d ", cur);
    for(i=0;i<n;i++)
    {
        if(mat2[cur][i] && visited[i] == 1)
        {
            visited[i] = 0;
            DFS2(i);
            //Push(i);
        }
    }
}
void SCC()
{
    int cur;
    printf("\n\nSCC:\n");
    while(!isEmpty())
    {
        cur = Pop();
        if(visited[cur] == 1)
        {
            visited[cur] = 0;
            DFS2(cur);
            printf("\n");
        }
    }
}
int main()
{
    int i, j, a, b;
    scanf("%d %d", &n, &e);
    for(i=0;i<n;i++)
    {
        visited[i] = 0;
        for(j=0;j<n;j++)
        {
            mat[i][j] = 0;
            mat2[i][j] = 0;
        }
    }
    for(i=0;i<e;i++)
    {
        scanf("%d %d", &a, &b);
        mat[a][b] = 1;
        mat2[b][a] = 1;
    }
    for(i=0;i<n;i++)
    {
        if(visited[i] == 0)
        {
            visited[i] = 1;
            DFS(i);
        }
    }
    SCC();
    return 0;
}

/*
8 14

0 1
1 2
2 3
2 6
3 2
3 7
4 0
1 4
1 5
4 5
5 6
6 5
6 7
7 7

0 1 2 3 7 6 5 4
A B C D H G F E

*/
