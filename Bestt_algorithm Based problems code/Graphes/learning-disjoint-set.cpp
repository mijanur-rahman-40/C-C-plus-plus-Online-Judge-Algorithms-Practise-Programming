#include<stdio.h>
#include<string.h>
#include<algorithm>
#define MAX 100
using namespace std;
int par[MAX];
int find_set(int n)
{
    if(par[n]!=n)
    {
        par[n]=find_set(par[n]);
    }
    return par[n];
}
void make_set(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        par[i]=i;
    }
}
void Union(int x,int y)
{
    int ux=find_set(x);
    int uy=find_set(y);
    if(ux==uy)
    {
        return;
    }
    else
    {
        par[ux]=uy;
    }
}
char arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int main()
{
    int test,node,node1,node2,i,j,k,len,cas=0,arr1[MAX];
    char a,b,big,ch[2];
    scanf("%d",&test);
    getchar();
    getchar();
    while(test--)
    {
        if(cas!=0)
            printf("\n");
        cas++;
        scanf("%c",&big);
        getchar();
        for(i=0;i<26;i++)
        {
            if(arr[i]==big)
            {
                make_set(i+1);
                node=i+1;
                break;
            }
        }
        //printf("%d\n",node);
        while(gets(ch))
        {
            //printf("yes\n");
         if(strcmp(ch,"")==0)
            break;

            for(i=0;i<26;i++)
            {
                if(ch[0]==arr[i])
                {
                    node1=i+1;
                    break;
                }
            }
            for(i=0;i<26;i++)
            {
                if(ch[1]==arr[i])
                {
                    node2=i+1;
                    break;
                }
            }
            Union(node1,node2);

        }
        int x=0,coun=0;
        for(i=1;i<=node;i++)
        {
            arr1[x]=find_set(i);
            x++;
        }
        sort(arr1,arr1+node);
     k=1;
     for(i=0;i<node-1;i++)
     {
          if(arr1[i]==arr1[i+1])
          {
              continue;
          }
          else
          {
              k++;
          }
     }
     printf("%d\n",k);
     memset(par,0,sizeof(par));

    }
}
