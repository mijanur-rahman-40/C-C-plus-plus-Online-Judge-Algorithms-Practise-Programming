#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    scanf("%d",&num);
    int arr[100];
    for(int i=0; i<num; i++){
        arr[i]= 1;
    }
    int coun = 0;
    for(int i=0; i<num; i++){
        if(!arr[i]) coun++;
    }
    cout<<coun<<endl;
}
