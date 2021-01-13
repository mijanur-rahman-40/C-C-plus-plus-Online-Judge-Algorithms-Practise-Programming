
#include<bits/stdc++.h>
using namespace std;
const int maxn=10000005;
bool flag[maxn];
int prime1[maxn];
vector<int>prime;
vector<int>prime2;
vector<int>prime3;
map<int,int>mp;
void sieve()
{

     flag[0]=flag[1]=1;
     //prime3.push_back(1);
      prime3.push_back(2);
    for(int i=4; i<maxn; i+=2)
     {
        flag[i]=1;
    }
    for(int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
               prime3.push_back(i);
        if(maxn/i>=i)
        {
            int add=i*2;
            for(int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}
}
int maxRepeating(int* prime1,int n,int k)
{
    for(int i=0;i<n;i++)
        prime1[prime1[i]%k]+=k;
    int max =prime1[0],result=0;
    for (int i=1;i<n;i++)
    {
        if (prime1[i]>max)
        {
            max =prime1[i];
            result =i;
        }
    }
    return result;
}
int main()
{
     sieve();
     int coun=0;
     int n,m,mx=1;
     int tst;
     scanf("%d",&tst);
     while(tst--){
     scanf("%d%d",&n,&m);
      if(n==m || abs(n-m)<=1){
      printf("No jumping champion\n");
      }
      else{
     for(int i=n;i<=m;i++)
          {
              if(flag[i]==0){
          prime.push_back(i);
     }
     }
     for(int i=0;i<prime.size()-1;i++)
          {
         int dif=abs(prime[i]-prime[i+1]);
         prime1[i]=dif;
         prime2.push_back(dif);
     }

 for(int i=0;i<prime2.size();i++)
     {
        if(mp.find(prime2[i])!=mp.end())
        {
            mp[prime2[i]]++;
        }
        else{
        mp.insert(pair<int,int>(prime2[i],1));
        }
  }
  for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++)
  {
       if((it->second)==1){
          coun++;
       }
       else
       {
            break;
       }
  }
  if(coun==prime2.size()){
     printf("No jumping champion\n");
  }
//  else if(coun==1){
//      printf("The jumping champion is %d\n",coun);
//  }
  else
  {
       int n=prime.size();
      int k=prime.size();
       int ans=maxRepeating(prime1, n, k);
        printf("The jumping champion is %d\n",ans);
    }

     }
     prime.clear();
    prime2.clear();
    prime3.clear();
    mp.clear();
    memset(prime1,0,sizeof(prime1));
     }
     return 0;
  }


