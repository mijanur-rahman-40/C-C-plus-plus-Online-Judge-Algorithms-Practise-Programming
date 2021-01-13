 #include<bits/stdc++.h>
using namespace std;
const int Max=1e5+10;
int arr[Max];
int main()
    {
         int num;
         cin>>num;
		for(int i =0;i<num;++i)
               scanf("%d",&arr[i]);
		sort(arr,arr+num);
			int x; scanf("%d", &x);
			int u=upper_bound(arr,arr+num,x)-arr;
			int l=lower_bound(arr,arr+num,x)-arr;
			printf("%d\n",u);
			printf("%d\n",l);
			//printf("X=%d theka boro num %d",x,num-u-l);
	return 0;
}
