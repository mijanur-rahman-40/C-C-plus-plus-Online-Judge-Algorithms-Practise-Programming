#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    scanf("%d",&num);
    int arr[num+2];
    for(int i=1; i<=num; i++){
        scanf("%d",&arr[i]);
    }
    pair<int,int>pai[num+3];
    pai[1].first  = abs(arr[1] - arr[2]);
    pai[1].second = abs(arr[1] - arr[num]);
    pai[num].first = abs(arr[num-1] - arr[num]);
    pai[num].second = abs(arr[1] - arr[num]);
    for(int i=2; i<=num-1; i++){
        int a = abs(arr[i] - arr[i-1]);
        int b = abs(arr[i] - arr[i+1]);
        pai[i].first = min(a,b);
        int c = abs(arr[i] - arr[1]);
        int d = abs(arr[i] - arr[num]);
        pai[i].second = max(c,d);
    }
for(int i=1; i<=num; i++){
    cout<<pai[i].first<<" "<<pai[i].second<<endl;
}

//cout<<pai[1].first<<" "<<pai[1].second<<" "<<pai[num].first<<" "<<pai[num].second;

}

/*
4
-5 -2 2 7
*/
