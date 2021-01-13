
#include<bits/stdc++.h>
using namespace std;
int arr1[27]={0},arr2[27]={0};
int main()
{
    int num;
    cin>>num;
    string str; cin>>str;
    int j=0;
    for(int i=0; i<str.size(); i++)
    {
        if(arr1[str[i]-'a']==0){
            arr2[j++]=i;
            arr1[str[i]-'a']=1;
        }
    }
    if(num>j){
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0; i<num-1; i++)
        {
            cout<<str.substr(arr2[i],arr2[i+1]-arr2[i])<<endl;
        }
        cout<<str.substr(arr2[num-1],str.size());
    }
    return 0;
}


/*
3
kydoybxlfeugtrbvqnrjtzshorrsrwsxkvlwyolbaadtzpmyyfllxuciia

k
y
doybxlfeugtrbvqnrjtzshorrsrwsxkvlwyolbaadtzpmyyfllxuciia
*/
























