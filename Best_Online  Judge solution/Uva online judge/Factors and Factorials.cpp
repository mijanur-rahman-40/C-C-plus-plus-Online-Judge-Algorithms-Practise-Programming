
#include<bits/stdc++.h>
using namespace std;;
map<int,int>mp;
map<int,int>::iterator it;
void prime_coun(int num)
{
  int p[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    for(int i=0;i<25;i++){
    if(num%p[i]==0){
        while(num%p[i]==0){
            mp[p[i]]++;
            num/=p[i];
        }
     }
  }
}
int main()
{
    int num;
    while(scanf("%d",&num)==1){
        if(num==0)
                break;
       for(int i=2; i<=num; i++){
        prime_coun(i);
       }
       printf("%3d! =",num);
       int i=0;
       for(it=mp.begin(); it!=mp.end(); it++){
            if(i==15){
            printf("\n      ");
            }
        printf("%3d",it->second);
        i++;
       }
       cout<<endl;
       mp.clear();
    }
    return 0;
}
/*
5
  5! =  3  1  1
53
 53! = 49 23 12  8  4  4  3  2  2  1  1  1  1  1  1
        1
100
100! = 97 48 24 16  9  7  5  5  4  3  3  2  2  2  2
        1  1  1  1  1  1  1  1  1  1
