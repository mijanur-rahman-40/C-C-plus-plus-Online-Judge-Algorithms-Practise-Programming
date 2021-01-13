
  #include<bits/stdc++.h>
  using namespace std;
  int main()
  {
       int num; int arr[110];
       cin>>num;
       for(int i=0;i<num;i++){
          cin>>arr[i];
       }
       for(int i=1;i<=num;i++){
          for(int j=0;j<num;j++){
               if(arr[j]==i){
                    cout<<j+1<<" ";
               }
          }
       }
       cout<<endl;
       return 0;
  }
