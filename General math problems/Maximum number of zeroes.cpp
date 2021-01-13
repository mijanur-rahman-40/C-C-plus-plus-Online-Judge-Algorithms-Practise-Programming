
#include <bits/stdc++.h>
using namespace std;
int findzero(int num){
    int cont=0;
    while(num!= 0){
        if(num%10==0)
            cont++;
        num/=10;
    }
    return cont;
}
int main() {
    int tst;
	cin>>tst;
	while(tst--){
            int num;
	    cin>>num;
	    int arr[1001];
	   for(int i=0;i<num;i++){
            cin>>arr[i];
	   }
	   sort(arr,arr+num);
	   int coun1[num+1],mx=0;
	        for(int i=0;i<num;i++){
	        int ans= findzero(arr[i]);
	        coun1[i]=ans;
	        mx=max(mx,ans);
	    }
	    int k=0;
	    for(int i=0;i<num;i++){
	      if(mx==coun1[i]){
	         k=i;
	      }
	    }
        if(mx==0){
            printf("-1\n");
        }
        else{
            cout<<arr[k]<<endl;
        }
          }
	return 0;
}

