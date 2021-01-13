#include<bits/stdc++.h>
using namespace std;
int arr[15];int mx = -1;
int main()
{

    int index ;
    for(int i=0; i<14; i++){
        cin>>arr[i];
        if(mx<arr[i]){
            mx = arr[i];
            index = i;
        }
    }
    arr[index] = 0;
    int i;
    for(i=0; i<14; i++){
        if( i >index){
                if(mx >0){
           arr[i] = arr[i] + 1;
           mx= mx -1;
                }
        }
    }

    int k;
    for(k =0; k<14; k++){
        if(k==13){
                if( mx>0 ){
                arr[k] = arr[k] + 1;
                mx= mx -1;
              }
                 k = 0;
                 if(mx == 0) break;
        }
        else{
           if( mx>0 ){
        arr[k] = arr[k] + 1;
           mx= mx -1;
           }
       }
    }
  int sum = 0;
    for(int i=0; i<14; i++){

        if(arr[i]%2==0){
            sum = sum + arr[i];
        }

        //cout<<arr[i]<<" ";
    }
    cout<<sum<<index<<endl;
}


/*
0 0 0 0 0 0 0 0 0 0 0 0 0 15


787 393 649 463 803 365 81 961 989 531 303 407 579 915
*/
