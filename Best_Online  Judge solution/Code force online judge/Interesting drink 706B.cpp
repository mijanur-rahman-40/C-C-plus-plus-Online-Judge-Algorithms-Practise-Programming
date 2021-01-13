#include<bits/stdc++.h>
using namespace std;
const int Max=1e5+10;
int arr[Max];
int main()
    {
         int num,q;
	   while(scanf("%d", &num)==1){
		for(int i =0;i<num;++i)
               scanf("%d",&arr[i]);
		sort(arr,arr+num);
		scanf("%d",&q);
		while (q--){
			int x; scanf("%d", &x);
			printf("%d\n",upper_bound(arr,arr+num,x)-arr);
		}
	}
	return 0;
}



include <bits/stdc++.h>
  using namespace std;
  int main()
 {
int a[100010];
     int n,i,m,num;
     while(scanf("%d",&n)!=EOF)
     {
          for(i=1;i<=n;i++)
               scanf("%d",&a[i]);
         sort(a+1,a+1+n);
         scanf("%d",&m);
         while(m--)
1         {
             scanf("%d",&num);
             if(num<a[1])
                 printf("0\n");
             else if(num>=a[n])
                 printf("%d\n",n);
             else
             {
                 int left=1,right=n;
                 int mid,ans;
                 while(left<=right)
                 {
                    mid=(left+right)/2;
                     if(a[mid]<=num)
                     {
                         ans=mid;
                         left=mid+1;
                     }
                     else right=mid-1;
                 }
                 printf("%d\n",ans);
             }
         }
    }
     return 0;
 }

/*
Nesar coode runn time error khai
#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int>vec1,vec2;
     int num,arr[10000];
     memset(arr,0,sizeof(arr));
     cin>>num;
     for(int i=0;i<num;i++){
               int n;cin>>n;
          vec1.push_back(n);
     }
     //sort(vec1.begin(),vec1.end());
     int num2;
     cin>>num2;
     for(int i=0;i<num2;i++){
          int n;cin>>n;
          vec2.push_back(n);
     }
     for(int i=0;i<vec2.size();i++){
               int coun=0;
          for(int j=0;j<vec1.size();j++)
               if(vec2[i]>=vec1[j])
                    arr[i]++;

     }
     for(int i=0;i<vec2.size();i++){
          cout<<arr[i]<<endl;
     }
     return 0;
}
*/
