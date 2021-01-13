#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[51];
    int len;
    int flag = 0;
    scanf("%s", str);
    len = strlen(str);
    for(int i=0;i < len/2 ;i++){
        if(str[i] != str[len-i-1]){
            flag = 1;
            break;
	   }
	}
	map<char,int>mp;

	for(int i=0; i<len; i++){
        mp[str[i]]++;
	}
	if(mp.size() == 1) cout<<"0"<<endl;
    else if (flag == 1){
        cout<<len<<endl;
    }
    else
    cout<<len-1<<endl;
    return 0;
}

