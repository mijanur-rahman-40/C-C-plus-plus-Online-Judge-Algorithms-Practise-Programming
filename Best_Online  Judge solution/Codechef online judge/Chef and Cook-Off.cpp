#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num; cin>>num;
    int coun=0;
    for(int i=0; i<num; i++){
        coun=0;
        for(int j=0; j<5; j++){ int a;
            cin>>a;
            if(a==1)coun++;
        }
        if(coun==0) cout<<"Beginner"<<endl;
        if(coun==1) cout<<"Junior Developer"<<endl;
        if(coun==2) cout<<"Middle Developer"<<endl;
        if(coun==3) cout<<"Senior Developer"<<endl;
        if(coun==4) cout<<"Hacker"<<endl;
        if(coun==5) cout<<"Jeff Dean"<<endl;

    }
    return 0;
}
