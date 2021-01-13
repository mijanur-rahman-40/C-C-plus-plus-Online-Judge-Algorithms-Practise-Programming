
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int coin[] = {5,10,20,50,100,200,500,1000,2000,5000,10000};
	long long temp[30005];
     memset(temp,0,sizeof(temp));
    temp[0] = 1;
    for(int i=0; i<11; i++){
        for(int j=1; j<=30005; j++){
               if(j>=coin[i]){
            temp[j] += temp[j-coin[i]];
               }
      }
    }
    int a,b;
    while(scanf("%d.%d",&a,&b)){
		int ans = a*100 + b;
		if(ans == 0)
			break;
       printf("%3d.%.2d%17lld\n",a,b,temp[ans]);
    }
       return 0;
}
