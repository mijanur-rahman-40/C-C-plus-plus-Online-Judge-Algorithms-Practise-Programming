
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int tst,j=1;
    cin>>tst;
    while(tst--){
    int coins,taka;
    scanf("%d%d",&coins,&taka);
    int coin[110];
    for(int i=0; i<coins; i++){
        cin>>coin[i];
    }
   int temp[taka+1];
    memset(temp,0,sizeof(temp));
    temp[0] = 1;
    for(int i=0; i<coins; i++){
        for(int j=1; j<=taka; j++){
                if(j>=coin[i]){
            temp[j] =(temp[j] + temp[j-coin[i]])% 100000007;

        }
      }
    }
        cout<<"Case "<<j++<<": "<<temp[taka]<<endl;
    }
       return 0;
}
