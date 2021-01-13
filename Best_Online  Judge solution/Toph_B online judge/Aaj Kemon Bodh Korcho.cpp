/*
#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
bool isFibonacci(int n)
{
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}
int main()
{
    int tst,j=1;
    scanf("%d",&tst);
    while(tst--){
       string str;
       cin>>str;
       int counB=0,counM=0;
    for(int i=0; i<str.size(); i++){
        if(!isFibonacci(i) && str[i]=='B'){
            counB++;
        }
        if(!isFibonacci(i) &&  str[i]=='M'){
            counM++;
        }
    }
    if(counB>counM){
        printf("Case #%d: Aaj Kemon Bodh Korcho\n",j++);
    }
    else if(counB<counM){
        printf("Case #%d: Hala Madrid\n",j++);
    }
    else
          printf("Case #%d: Meh :%c\n",j++,92);
    }
return 0;
}


*/

#include<bits/stdc++.h>
using namespace std;
#define maxx 100010
bool arr[maxx];
void is_Fibonacci()
{
    arr[0]=true;
    arr[1]=true;
    int a=0,b=1,c;
    while(a+b<=maxx)
    {
        c=a+b;
        arr[c]=true;
        a=b;
        b=c;
    }
}
int main()
{
    is_Fibonacci();
    int tst,j=1;
    scanf("%d",&tst);
    while(tst--){
       string str;
       cin>>str;
       int counB=0,counM=0;
    for(int i=0; i<str.size(); i++){
        if(!arr[i] && str[i]=='B'){
            counB++;
        }
        if(!arr[i] && str[i]=='M'){
            counM++;
        }
    }
    if(counB>counM){
        printf("Case #%d: Aaj Kemon Bodh Korcho\n",j++);
    }
    else if(counB<counM){
        printf("Case #%d: Hala Madrid\n",j++);
    }
    else
          printf("Case #%d: Meh :%c\n",j++,92);
    }
return 0;
}

