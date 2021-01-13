//code ta problem aswe
#include<bits/stdc++.h>
using namespace std;
int flag[10];
char str[10];
vector<char>ret;
void rec(int len){
    int i;
    if(len==strlen(str)){
        printf("%c",ret[i]);
        return;
    }
    for(int i=0;i<strlen(str);i++){
        if(flag[i]==0){
            flag[i]=1;
            ret.push_back(str[i]);
            rec(i+1);
            flag[i]=0;
            ret.pop_back();
        }
    }
}
int main()
{
    str[0]='a';
    str[1]='b';
    str[2]='c';
    rec(0);
    return 0;
}

