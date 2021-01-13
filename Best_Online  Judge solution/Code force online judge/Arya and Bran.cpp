#include<bits/stdc++.h>
using namespace std;

int n;
long k;
long sum;
int main()
{
    scanf("%d%ld", &n, &k);
    for (int i=1; i<=n; i++)
    {
         long x;
        scanf("%lld", &x);
        sum+=x;
        //long eight=8;
        x=min(sum,(long)8);
        sum-=x;
        k-=x;
        if (k<=0)
        {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
/*
//nesar code a problem ase
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k;
     cin>>n>>k;int arr[1000],sum=0,flag=0,index;
     for(int i=0;i<n;i++){
          cin>>arr[i];

        if(n*8>k && arr[i]>8){
              sum+=8;
          }
          else
                sum+=arr[i];
                cout<<sum<<endl;
                if(sum>k && flag==0){
                     index=i;flag=1;
                }
     }

     if(n==1 ){
     if(arr[0]>k)
          cout<<"-1"<<endl;
     else
          cout<<"1"<<endl;
    }
    else if(flag==1){
     cout<<index+1<<endl;
    }
    else if(n>=k){
     cout<<k<<endl;
    }
    else if(sum==k){
     cout<<n<<endl;
    }
    else if(sum>k){
     cout<<ceil((double) k/8)<<endl;
    }
    else {
     cout<<"-1"<<endl;
    }
    //cout<<sum<<endl;
    return 0;
}
*/
