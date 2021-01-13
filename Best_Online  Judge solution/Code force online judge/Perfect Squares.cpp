
/*
#include<bits/stdc++.h>
using namespace std;
bool istrue(int x){
   for(int i=0;i<=1000;i++){
    if(i*i==x){
        return 1;
    }
   }
return 0;
}
int main()
{
    int num,j;
    cin>>num;
    int mx=-10000000;
    for(int i=0;i<num;i++){
        scanf("%d",&j);
     if(!istrue(j)){
    mx=max(mx,j);
   }
}
cout<<mx<<endl;
return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,a,j,mx2=-10000000;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>j;
        a=sqrt(j);
        if(a*a!=j){
            mx2=max(mx2,j);
        }
    }
    cout<<mx2<<endl;
    return 0;
}
