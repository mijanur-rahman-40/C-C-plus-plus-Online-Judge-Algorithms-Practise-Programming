#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,len;
    scanf("%d%d",&num,&len);
    for(int i=0; i<len; i++){
        if(num%10==0){
            num = num/10;
        }
        else
            num = num-1;
    }
    cout<<num<<endl;
}
