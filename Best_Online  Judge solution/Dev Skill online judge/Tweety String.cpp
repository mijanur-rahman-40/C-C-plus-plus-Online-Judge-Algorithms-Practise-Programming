#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    scanf("%d",&tst);
    while(tst--){
        char ch[101];
        scanf("%s",ch);
        int sum = 0;
        for(int i=0; i<strlen(ch); i++){
            int temp = ch[i];
            sum = sum +temp;
        }
     if(sum%20==0) cout<<"Yes"<<endl;
     else cout<<"No"<<endl;
    }
}

