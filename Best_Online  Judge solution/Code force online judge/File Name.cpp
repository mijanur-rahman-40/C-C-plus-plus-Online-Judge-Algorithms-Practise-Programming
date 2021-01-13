
//Bug ase
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num3;
    scanf("%d",&num3);
    string str,s = "xxx";
    int coun = 0;
    cin>>str;
    int i;
    for( i=0; i<str.size(); i++){
       string str1 = "";
       if(str.size() == 3){
        str1 = str;
       }
       else{
       str1 = str.substr(i,3);
       }
       if(str1 == s){
        str.erase(i,1);
        coun++;
        i = 0;
       }
       cout<<str<<" "<<str1<<" "<<coun<<endl;
    }
    cout<<coun<<endl;
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num3;
    scanf("%d",&num3);
    string str;
    int coun = 0,ans = 0;
    cin>>str;
    int i;
    for( i=0; i<str.size(); i++){
        if(str[i] == 'x'){
            coun++;
        }
        else
            coun=0;
        if(coun >= 3) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
