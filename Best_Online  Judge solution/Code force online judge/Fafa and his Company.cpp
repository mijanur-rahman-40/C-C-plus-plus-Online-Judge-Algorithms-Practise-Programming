#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num; int coun=0;
    for(int i=1; i<=num/2; i++ ){
        if(num%i==0){
            coun++;
        }
    }
    cout<<coun<<endl;
}
