#include<iostream>
#include<queue>
using namespace std;
priority_queue<int,vector<int>,greater<int> >raju;
int main()
{
    int n;
    while(cin>>n && n!=0){
            while(n--){
    int m;
    cin>>m;
    raju.push(m);
            }
    int sum1=0,sum2=0,a,b;
    while(!raju.empty()){

    a=raju.top();
    raju.pop();
    if(raju.empty()){
        break;
    }
    b=raju.top();
    raju.pop();
    sum1=a+b;
    sum2+=sum1;

   raju.push(sum1);

    }
    cout<<sum2<<endl;
    }
    return 0;

}



