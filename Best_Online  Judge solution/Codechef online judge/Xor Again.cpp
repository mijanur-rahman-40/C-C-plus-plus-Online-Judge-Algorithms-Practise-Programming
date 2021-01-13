#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    scanf("%d",&tst);
    while(tst--){
        int num;
        scanf("%d",&num);
        int arr[num];
        for(int i=0; i<num; i++){
            scanf("%d",&arr[i]);
        }
        vector<int>vec;
        for(int i=0; i<num; i++){
                for(int j=0; j<num; j++){
                    vec.push_back(arr[i]+arr[j]);
                }
        }
        int temp = 0;
        for(int i=0; i<vec.size(); i++){
            temp = temp ^ vec[i];
        }
        cout<<temp<<endl;
    }
}
