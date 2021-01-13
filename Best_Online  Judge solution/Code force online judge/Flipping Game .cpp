#include<bits/stdc++.h>
using namespace std;
int sum[101],arr[101];
int main()
{

    int num;
    scanf("%d",&num);
    for(int i=1; i<=num; i++){
        scanf("%d",&arr[i]);
        sum [ i] = sum[i-1] + arr[i];
    }
    int temp ,ans = 0;
    for(int i=1; i<=num; i++){
        for(int j=i; j<=num; j++){
            temp = sum[j] - sum[i-1];
             ans=max(ans,sum[num]+(j-i+1)-2*temp);
        }
    }
    cout<<ans<<endl;
    /*
    int flag = 1;
    vector<int>vec;
    for(int i=1; i<=num; i++){
        if( arr[i] == 0){
            vec.push_back(i);
            flag = 0;
        }
    }
    if( flag == 1 && num != 1){
        cout<<num-1<<endl;
        return 0;
    }
    if( flag == 1 ){
        cout<<"0"<<endl;
        return 0;
    }

    sort(vec.begin(),vec.end());
    int start = vec[0];
    int enda  = vec[vec.size()-1];
    for(int i=start; i<=enda; i++){
        if(arr[i] == 0){
            arr[i] = 1;
        }
        else
            arr[i] = 0;
    }
    int coun = 0;
    for(int i=1; i<=num; i++){
            if(arr[i] == 1){
                coun++;
            }
    }
    cout<<coun<<endl;

    */



}

