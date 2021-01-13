#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    int coun = 0;
    while(tst--){
        string str;
        cin>>str;
        if(str[0] == 'n' && str[str.size()-1] == 'd'){
            coun++;
        }
    }
    printf("%d\n",coun);
    return 0;
}
