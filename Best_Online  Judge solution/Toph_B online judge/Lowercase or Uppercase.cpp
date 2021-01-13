#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,j=1;
    cin>>test;
    while(test--){
        char str[10001];
        scanf("%s",str);
        int coun1=0,coun2 = 0,coun3 = 0;
        for(int i=0; i<strlen(str); i++){
            if(islower(str[i])) coun1++;
            if(isupper(str[i])) coun2++;
            if(isdigit(str[i])) coun3++;
        }
        if(coun1==0 && coun2==0 || coun1==0 && coun3==0 || coun2==0 && coun3==0)
            cout<<"Case "<<j++<<": "<<"0"<<endl;
        else{
             if(coun1==0)
            cout<<"Case "<<j++<<": "<<min(coun2,coun3)<<endl;
            else if(coun2==0)
            cout<<"Case "<<j++<<": "<<min(coun3,coun1)<<endl;
            else if(coun3==0)
            cout<<"Case "<<j++<<": "<<min(coun2,coun1)<<endl;
            else
            cout<<"Case "<<j++<<": "<<strlen(str)-max(max(coun3,coun2),coun1)<<endl;
        }
    }
}
