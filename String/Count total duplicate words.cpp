
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mpp;
    map<string,int>::iterator it;
    string s;
    int j=0,count=0;
    while(cin>>s){
        	mpp[s]++;
        	count++;
    	}
 for(it=mpp.begin();it!=mpp.end();it++){
          if((it->second)!=1){
       cout<<it->first<<" "<<it->second<<endl;
       }
 }
	//cout<<"unique words "<<count<<endl;
}


