#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    scanf("%d",&tst);
    while(tst--){
        int num,swaping;
        scanf("%d %d",&num,&swaping);
         int arr[num];
        for(int i=0; i<num; i++){
            scanf("%d",&arr[i]);
        }
         int Motu = 0,Tomu = 0;
        int index, coun = 0;
          if(swaping == 0){
          for(int i=0; i<num/2; i++){
             Tomu += arr[i];
          }
           for(int i=num/2; i<num; i++){
               Motu += arr[i];
          }
          if( Motu  > Tomu ){
                cout<<"YES"<<endl;
          }
          else{
              cout<<"NO"<<endl;
             }
          }
          else{
           for(int i=1; i<num; i++){
            if(arr[i-1]>arr[i] && coun<swaping){
                swap(arr[i-1],arr[i]);
                index = i;
                coun++;
              }
           }

           for(int i=0; i<index; i++){
            Motu += arr[i];
           }
           for(int i=index; i<num; i++){
            Tomu += arr[i];
           }
           if(Motu<Tomu) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
        }
        }
        return 0;
}
