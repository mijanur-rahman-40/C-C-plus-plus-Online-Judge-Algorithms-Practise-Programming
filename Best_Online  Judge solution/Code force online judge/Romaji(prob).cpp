
#include<bits/stdc++.h>
using namespace std;

bool is_vowel(char ch){
    if(ch == 'a' || ch == 'e' || ch =='i' || ch =='o' || ch == 'u'){
       return true;
    }
    else
        return false;
}
int main()
{
    string str;
    cin>>str;
    bool flag =true;
    if(str.size() == 1 && is_vowel(str[0])){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0; i<str.size()-1; i++){
    if((!is_vowel(str[i]) && is_vowel(str[i+1])) || (
       str[i] == 'n' && str[i+1] !='1')){
              flag = true;
            }

     else if((is_vowel(str[i]) && str[i+1] !='1') || (
            str[i] == 'n' && str[i+1] !='1')){
                flag = true;
            }

        else{
             flag = false;
                break;
            }

    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
//codeforces

