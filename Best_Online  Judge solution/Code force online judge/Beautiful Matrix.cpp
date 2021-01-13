#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0,coun1,coun2;
    int arr[6][6],row,colum;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1){
                row=i;
                colum=j;
            }
        }
    }
        coun1=abs(3-row);
        coun2=abs(3-colum);
        cout<<coun1+coun2<<endl;
    }
