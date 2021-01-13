/*
Input
3
1 2 3 10
1 4 3 10
15 30 45 5
Output
Case 1: 10
Case 2: Error
Case 3: 75
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,j=1;
    scanf("%d",&test);
    while(test--){
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        int dif1 = b-a;
        int dif2 = c-b;
        if( dif1==dif2){
            cout<<"Case "<<j++<<": "<<dif1*d+(a-dif1)<<endl;
        }
        else
            cout<<"Case "<<j++<<": Error"<<endl;
    }
}
