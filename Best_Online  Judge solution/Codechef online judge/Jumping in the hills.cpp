
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    scanf("%d",&tst);
    while(tst--){
        int N,U,D;
        scanf("%d%d%d",&N,&U,&D);
        int arr[N+2];
        for(int i=0; i<N; i++){
            scanf("%d",&arr[i]);
        }
        int flag=0,coun=1;
        for(int i=1; i<N; i++){
            if(arr[i-1]<=arr[i] && arr[i]-arr[i-1]<=U){
                coun++;
            }
        else  if(arr[i-1]>arr[i] && arr[i-1]-arr[i]>D && flag==0){
                flag=1;
                coun++;
             }
        else if(arr[i-1]>arr[i] && arr[i-1]-arr[i]<=D ){
                coun++;
        }
        else
            break;
        }
        cout<<coun<<endl;
    }
    return 0;
}
