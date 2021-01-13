//#include<bits/stdc++.h>
//
//using namespace std;
//int main()
//{
//    int tst;
//    cin>>tst;
//    while(tst--){
//            int num;
//      cin>>num;
//        set<int>se;
//    for(int i=0;i<num;i++){
//          int n;
//            cin>>n;
//        se.insert(n);
//    }
//        cout<<se.size()<<endl;
//
//    }
//    return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//bool arr[100005];
//int main()
//{
//    int tst;
//    cin>>tst;
//    while(tst--){
//            int num;
//      cin>>num;
//      int count=0;
//      memset(arr,0,sizeof arr);
//      for(int i=0;i<num;i++){
//          int n;
//            cin>>n;
//            if(arr[n]==false){
//                count++;
//                arr[n]=true;
//            }
//}
//cout<<count<<endl;
//    }
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    int  arr[100005]={0};
    cin>>tst;
    while(tst--){
            int num;
      cin>>num;
      int temp=num;
      int count=0;
      for(int i=0;i<num;i++){
          int n;
            cin>>n;
            if(arr[n]==0){

                arr[n]=1;
            }
            else{
                count++;
}
}

cout<<temp-count<<endl;
    }
    return 0;
}

