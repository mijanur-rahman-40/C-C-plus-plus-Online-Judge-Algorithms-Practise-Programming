
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int taka;
    while(scanf("%d",&taka)==1){
    int coin[] = {1,5,10,25,50};
    long long temp[30005];
     memset(temp,0,sizeof(temp));
    temp[0] = 1;
    for(int i=0; i<5; i++){
        for(int j=1; j<=taka; j++){
            if(j>=coin[i]){
            temp[j] += temp[j-coin[i]];
         }
       }
    }
		if(temp[taka] == 1){
            printf("There is only 1 way to produce %d cents change.\n",taka);
		}
       else{
   printf("There are %lld ways to produce %d cents change.\n",temp[taka],taka);
       }
    }
       return 0;
}
