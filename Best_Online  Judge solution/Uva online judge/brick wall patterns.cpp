#include<iostream>
using namespace std;
int main()
{
    int num,arr[100];
    while(cin>>num){
    if(num==0)
        break;
       arr[0]=1;
       arr[1]=2;
        for(int i=2;i<num;i++){
            arr[i]=arr[i-2]+arr[i-1];
        }
        cout<<arr[num-1]<<endl;
    }
  return 0;
}
