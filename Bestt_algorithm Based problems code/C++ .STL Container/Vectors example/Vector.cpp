#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    for(int i=0;i<10;i++){
        a.push_back(rand());
    }
    sort(a.begin(),a.end());
    for(int i=0;i<(int)a.size();i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    //printf("%d",a.begin());
   int q,n;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        int p=lower_bound(a.begin(),a.end(),n)-a.begin();
        printf("Position: %d\n",p);
    }

    return 0;
}
