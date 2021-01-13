
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    scanf("%d",&num);
    bool flag = true;
    while(num>0){
    if(num%1000 == 144){
        num  = num / 1000;
    }
    else if(num%100 == 14){
        num = num / 100;
    }
    else if(num%10 == 1){
        num = num / 10;
    }
    else{
        flag = false;
       break;
    }
}
   if(flag)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
    return 0;
}

