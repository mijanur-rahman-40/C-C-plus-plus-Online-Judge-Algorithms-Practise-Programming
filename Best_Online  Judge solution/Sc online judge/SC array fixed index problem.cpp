/*

partho ar code



#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>a;
    int n,k,t,p,i,x[1001];
    cin>>t;
    while(t--){
        cin>>n>>k;
        int q;
        for(i=1;i<=n;i++){
            cin>>p;
            if(i==k)
               q=p;
            else
             a.insert(p);
        }
        int f=0, y=0;
        for(__typeof(a.begin()) it=a.begin();it!=a.end();it++){
            f++;
            if(n==1)
               x[y++]=q;
            else{
                if(f==k)
                 x[y++]=q;
                x[y++]=*it;
            }
        }
        if(n==k) x[y++]=q;
        for(i=0;i<y;i++){
            cout<<x[i];
            if(i<y-1)
               cout<<" ";
        }
        a.clear();
        cout<<endl;
    }
    return 0;
}

*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
      multiset<int>mset;
     vector<int>vec; int tst;
      multiset<int>::iterator it;
      cin>>tst;
      while(tst--){
     int num1,num2,index,arr[1000];
     memset(arr,0,sizeof(arr));
     scanf("%d%d",&num1,&num2);
     for(int i=1;i<=num1;i++){
               int n;cin>>n;
     if(n==num2){
          index=i;
     }
     else  mset.insert(n);
     }
       int j=1;
     for (it=mset.begin(); it!=mset.end(); ++it){
              arr[j]=*it;
               j++;
     }
     int k=1;
     for(int i=1;i<=num1;i++){
           if(index==i){
               vec.push_back(num2);
           }
           else{
                    vec.push_back(arr[k]);
           k++;
           }
     }
      for(int i=0;i<num1;i++){
          printf("%d",vec[i]);
          if(i<num1-1)
               printf(" ");
        }
      printf("\n");
      mset.clear();
      vec.clear();
      }
      return 0;
}

