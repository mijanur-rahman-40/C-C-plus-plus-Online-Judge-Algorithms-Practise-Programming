#include <bits/stdc++.h>
using namespace std;
long long int a,i,j=1;
int main(){
	while(cin>>a){
	if(a == 0){
	 a = 1;
          cout<<a<< endl;
	}
		else{
			for(i =1; i <=a; i++){
				j =(j*i%10)%10;
			}
			cout <<j%10<< endl;
		}
		j=1;
	}
	return 0;
}
