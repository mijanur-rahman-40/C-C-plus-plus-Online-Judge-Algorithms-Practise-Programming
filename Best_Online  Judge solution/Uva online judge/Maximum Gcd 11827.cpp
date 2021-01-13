
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if (b == 0)
     return a;
    return gcd(b, a%b);
}
int main() {
    int tst;
    scanf("%d",&tst);
     cin.ignore();
    while(tst--) {
        string st;

        int num, ans=0;
        vector<int>v;
        getline(cin,st);stringstream ss(st);
        //ss.str(st);
        while(ss>>num)
            {
          v.push_back(num);
            }
   for(int i=0;i<v.size()-1;i++){
      for(int j=i+1;j<v.size();j++){
         ans=max(ans,gcd(v[i],v[j]));
        }
    }
        printf("%d\n", ans);
    }
    return 0;
}



/*

 while(scanf("%s%c",str,&ch))
        {
            mp[str]++;
            if(ch=='\n')
            {
                break;
            }
        }

*/
