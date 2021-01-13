#include<iostream>
#include<cstring>
using namespace std;
int b[10001];
int a[101][101];
int main()
{
   int n,l,r,mid;
   while(cin>>n)
   {
        int tmp=1;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                if(j==1)
                {
                    a[i][j]=i;
                    tmp=i;
                }
                else
                {
                    if(tmp%n!=0)
                    {
                        a[i][j]=tmp+n+1;
                        tmp=a[i][j];
                    }
                    else if(tmp%n==0)
                    {
                        a[i][j]=tmp+1;
                        tmp=a[i][j];
                    }
                }
            }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<a[i][n]<<endl;
        }
   }
}
