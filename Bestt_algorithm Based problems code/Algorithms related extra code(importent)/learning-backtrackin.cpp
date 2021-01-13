#include<bits/stdc++.h>
using namespace std;
int flag[3];
char arr[3];
vector<char>ret;
void rec(int len)
{
    for(int i=0;i<ret.size();i++)
        //if(flag[i]==0)
        printf("%c",ret[i]);
    cout<<endl;


    if(len==3){
      //  for(int i=0;i<ret.size();i++) printf("%c",ret[i]);
        //cout<<endl;
        return ;
    }
    for(int i=len;i<3;i++)
    {
        if(flag[i]==0)
        {
            flag[i]=1;
            ret.push_back(arr[i]);
            if(i+1<4)
            rec(i+1);
            flag[i]=0;
            ret.pop_back();
        }
    }
}
int main()
{
    arr[0]='a';
    arr[1]='b';
    arr[2]='c';
    //arr[3]='d';
    rec(0);
}


