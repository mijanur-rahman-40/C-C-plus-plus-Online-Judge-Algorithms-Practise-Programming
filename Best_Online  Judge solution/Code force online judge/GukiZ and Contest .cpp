#include<bits/stdc++.h>
using namespace std;
int vis[2010]={0};
int main()
{
    int num,arr[2010];
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        scanf("%d",&arr[i]);
    }
    int coun;
    for(int i=1;i<=num;i++){
            coun=1;
        for(int j=1;j<=num;j++){
            if(arr[i]<arr[j]){
               coun++;
        }
    }
      cout<<coun<<" ";
    }
    return 0;
}
/*
11
5 6 4 2 9 7 6 6 6 6 7
Output
9 4 10 11 1 2 4 5 6 7 2
Answer
9 4 10 11 1 2 4 4 4 4 2
*/
