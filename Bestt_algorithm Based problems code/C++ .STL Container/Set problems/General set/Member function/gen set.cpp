#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    set<int>se;
    scanf("%d",&a);
    while(a--){
        int q;
        scanf("%d",&q);
        se.insert(q);
    }

    cout<<se.size()<<endl;
    cout<<endl;
    //for(__typeof(se.begin())it=se.begin();it!=se.end();it++){
    for(set<int>::iterator it=se.begin();it!=se.end();it++){
        cout<<*it<<endl;
    }
    return 0;

}
