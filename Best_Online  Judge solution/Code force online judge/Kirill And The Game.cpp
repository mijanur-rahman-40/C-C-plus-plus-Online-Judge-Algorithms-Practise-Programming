
#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	 long  a,b,x,y,k;
	cin>>a>>b>>x>>y>>k;
	 int flag = 1;
	for(long i=x;i<=y;i++){
		long p = i * k;
		if(p >= a && p <= b)
		{
			cout<<"YES";
			flag = 0;
			break;
		}
	}

	if(flag==1)
		cout<<"NO";
	return 0;
}

/*
#include<iostream>
using namespace std;
long long l,r,x,y,k;
int main(){
	cin>>l>>r>>x>>y>>k;
	for(int i=x; i<=y; i++) if(i*k>=l && i*k<=r){
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
}
*/
