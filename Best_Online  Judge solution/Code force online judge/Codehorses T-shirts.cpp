#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    string arr1[101],arr2[101];
    for(int i=0; i<num; i++){
        string str;
        cin>>str;
        arr1[i] = str;
    }
    for(int i=0; i<num; i++){
        string str;
        cin>>str;
        arr2[i] = str;
    }
    int coun = 0;
 for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
           if(arr1[i] ==arr2[j]){
            arr1[i] = "AB";
            arr2[j] = "BB";
             coun++;
           }
        }
 }
 cout<<(num*2-coun*2)/2<<endl;
    return 0;
}


/*
XS
XS
M
XL
S
XS
*/
