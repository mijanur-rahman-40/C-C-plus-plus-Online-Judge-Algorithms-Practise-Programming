#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		vector<long> vec;
		for(int i=0;i<n;i++){
			long temp;
			cin>>temp;
			if(temp!=1)
				vec.push_back(temp);
		}
		while(q--){
			long x;
			cin>>x;
			for(int i=0;(i<vec.size()) && x;i++){
				x/=vec[i];
			}
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}
