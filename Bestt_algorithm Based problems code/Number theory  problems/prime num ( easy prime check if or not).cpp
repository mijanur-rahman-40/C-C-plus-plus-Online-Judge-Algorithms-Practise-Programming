#include<iostream>
#include<math.h>
using namespace std;
bool isprime(long long n){
  if(n<2){
    return false;
  }
  //for(int i=2;i<n;i++){
        //for(int i=2;i<=sqrt(n);i++){
                for(long i=2;i*i<=n;i++){
    if(n%i==0){
        return false;
    }
  }
 return true;

}
int main()
{
     long long num;
    int a;
    for(;;){
    cin>>num;
    a=isprime(num);
    if(a==false){
    cout<<"no"<<endl;
    }
    else
        cout<<"yes"<<endl;
    }
return 0;

}
