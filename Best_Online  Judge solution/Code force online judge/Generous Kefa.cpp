
/*
#include<cstdio>
using namespace std;
int cnt[128];
int main()
{
	int n, k;
	 scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++) {
		char t;
		scanf("%c", &t);
		cnt[t]++;
		if (cnt[t]>k) {
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
     char ch;
     map<char,int>mp;
      map<char,int>::iterator it;
    int n,k;cin>>n>>k;
    for(int i=0;i<n;i++){
     cin>>ch;
     mp[ch]++;
    }
     for(it=mp.begin();it!=mp.end();it++){
        if(it->second>k){
          cout<<"NO"<<endl;
         return 0;
        }
     }
     cout<<"YES"<<endl;
     return 0;
}
