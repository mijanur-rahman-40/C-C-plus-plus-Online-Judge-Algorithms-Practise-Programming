
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int num,prime,ans;
    while(cin>>num){
        if(num==0){
            break;
        }
      prime=0;
     ans=pow(2,num-1)*(pow(2,num)-1);
    for(int j=2;j<=sqrt(n);j++){
        if(num%j==0){
            prime=1;
        }
    }
    if(prime==0 && num!=2 && num!=3 && num!=5 && num!=7 && num!=13 && num!=17 && num!=19 && num!=31 ){
        cout<<"Given number is prime. But, NO perfect number is available."<<endl;
    }
    else if(prime==1){
        cout<<"Given number is NOT prime! NO perfect number is available."<<endl;
    }
    else
        cout<<"Perfect: "<<ans<<"!"<<endl;
    }
    return 0;
}
/*

//nesr code dara 17 porjonto hoi
#include<bits/stdc++.h>
using namespace std;
vector<int>divider;
int sum,flag1=0;
 void divisorsprint(int ans){
      for(int i=1;i<=ans/2;i++){
               if(ans%i==0){
                  divider.push_back(i);
               }
          }
 }
void divisorssum(int ans){
          sum=0;
          for(int i=0;i<divider.size();i++){
                   sum=sum+divider[i];
               }
               if(ans==sum){
                    printf("Perfect: %d!",ans);
               }
               else{
                    printf("Given number is prime. But, NO perfect number is available.");
               }
}
int main()
{
     long num,ans;
     while(scanf("%ld",&num) && num){
               for(int i=2;i<=sqrt(num);i++){
                    if(num%i==0)
                         flag1=1;
               }
               if(flag1==1){
                    printf("Given number is NOT prime! NO perfect number is available.");
               }
               else{
               ans=pow(2,num-1)*(pow(2,num)-1);
                divisorsprint(ans);
                divisorssum(ans);
               }
          divider.clear();
          sum=0;
          flag1=0;
          printf("\n");
     }
     return 0;
}
*/
