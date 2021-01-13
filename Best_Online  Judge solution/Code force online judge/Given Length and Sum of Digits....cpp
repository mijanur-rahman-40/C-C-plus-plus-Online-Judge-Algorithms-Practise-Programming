
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int large[101],small[101];
	int m,s;
	scanf("%d%d",&m,&s);
	if(m==1 && s==0){
		cout<<"0 0"<<endl;
		return 0;
	}
	if(s<1 || s>m*9 ){
		cout<<"-1 -1"<<endl;
		return 0;
	}
	int sum = s;
	for(int i=0; i<m; i++){
		large[i] = min(9,sum);
		sum = sum - large[i];
	}
	sum = s;
	for(int i=m-1; i>0; i--){
		small[i] = min(9,sum-1);
		sum = sum - small[i];
	}
	small[0] = sum;
	for(int i=0; i<m; i++){
		cout<<small[i];
	}
	cout<<" ";
	for(int i=0; i<m; i++){
		cout<<large[i];
	}
	cout<<endl;
	return 0;
}


