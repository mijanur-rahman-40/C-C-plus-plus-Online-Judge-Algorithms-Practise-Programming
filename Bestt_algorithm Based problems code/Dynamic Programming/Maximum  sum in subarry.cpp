/*
#include<bits/stdc++.h>
using namespace std;
int max(int a, int b) { return (a > b)? a : b; }
int max(int a, int b, int c) { return max(max(a, b), c); }
int M_C_S(int arr[], int l, int m, int h)
{
    int sum = 0;
    int left_sum = INT_MIN;
    for (int i = m; i >= l; i--)
    {
        sum = sum + arr[i];
        if (sum > left_sum)
          left_sum = sum;
    }
    sum = 0;
    int right_sum = INT_MIN;
    for (int i = m+1; i <= h; i++)
    {
        sum = sum + arr[i];
        if (sum > right_sum)
          right_sum = sum;
    }
    return left_sum + right_sum;
}
int M_S_S(int arr[], int l, int h)
{
   if (l == h)
     return arr[l];
   int m = (l + h)/2;

      //a) Maximum subarray sum in left half
      //b) Maximum subarray sum in right half
      //c) Maximum subarray sum such that the subarray crosses the midpoint
   return max(M_S_S(arr, l, m),M_S_S(arr, m+1, h),M_C_S(arr, l, m, h));
}
int main()
{
   int arr[100];
    int num;cin>>num;
    for(int i=0; i<num; i++){
                cin>>arr[i];
    }
   int max_sum = maxSubArraySum(arr, 0, num-1);
   printf("Maximum contiguous sum is %d", max_sum);
   getchar();
   return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int Max_Subarray_Sum(int arr[],int num)
{
	if(num==1)
	{
		return arr[0];
	}
	int mid= num/2;
	int left_MSS = Max_Subarray_Sum(arr,mid);
	int right_MSS = Max_Subarray_Sum(arr+mid,num-mid);
	int leftsum = INT_MIN, rightsum = INT_MIN, sum=0;
	for(int i=mid;i < num; i++)
	{
		sum += arr[i];
		rightsum = max(rightsum,sum);
	}
	sum = 0;
	for(int i= (mid-1);i >= 0; i--)
	{
		sum += arr[i];
		leftsum = max(leftsum,sum);
	}
	int ans = max(left_MSS,right_MSS);
	return max(ans,leftsum+rightsum);
}

int main()
{
    int arr[100];
    int num;cin>>num;
    for(int i=0; i<num; i++){
                cin>>arr[i];
    }
    int max_sum = Max_Subarray_Sum(arr, num);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
*/
/*
//kadane's algorithm does not work with all negative number it simply return 0
//best
#include<bits/stdc++.h>
using namespace std;
int  M_S_A(int a[], int size)
{
    int max_so_far =INT_MIN;
    int  mx_e= 0;
    for (int i = 0; i < size; i++){
       mx_e=mx_e + a[i];
        if (mx_e< 0)
           mx_e = 0;
        if (max_so_far < mx_e)
            max_so_far = mx_e;

    }
    return max_so_far;
}
int main()
{
    int a[100];
    int num;cin>>num;
    for(int i=0; i<num; i++){
                cin>>a[i];
    }
    int max_sum = M_S_A(a, num);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
*/
//if all elements be negative
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int arr[100];
    int num;cin>>num;
    for(int i=0; i<num; i++){
                cin>>arr[i];
    }
    int max_so_far = arr[0];
    int curr_max = arr[0];
        for (int i = 1; i < num; i++){
                curr_max = max(arr[i],curr_max+arr[i]);
        max_so_far = max(max_so_far,curr_max);
        }
       cout<<max_so_far<<endl;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int temp[100]={0};
int top,bottom;
int kadane(int N)
{
    int mx = INT_MIN , sum=0 , localTop = 0 ;
    bool flag = false ;
    for(int i=1; i<=N; i++){
        if(temp[i]>=0){
            flag = true ;
        }
        sum = sum+temp[i];
       cout<<sum<<endl;
        if(sum<0){
            sum=0;
            localTop = i+1 ;
        }
        else if(sum>mx){
            mx = sum;
            top = localTop ;
            bottom = i ;
        }
    }
    if(flag){
        return mx ;
    }

    mx = INT_MIN;
    for(int i=1;i<=N;i++){
        if(mx<temp[i])
        {
            mx = temp[i] ;
            top = bottom = i ;
        }
    }
    return mx ;
}

int main()
{
   int arr[100];
    int num;cin>>num;
    for(int i=1; i<=num; i++){
                cin>>temp[i];
    }
    int ans=kadane(num);
    cout<<"ans = "<<ans<<"  top = "<<top<<"  bottom = "<<bottom<<endl;
    printf("Array print: \n");
    for(int i=top; i<=bottom; i++){
        cout<<temp[i]<<" ";
    }
 return 0;
}

*/


/*
#include<bits/stdc++.h>
using namespace std;
int M_S_S(int arr[],int n)
{
	int ans = INT_MIN;int sum;
	for(int i = 0;i < n; i++){
        sum=0;
	for(int j = 1;j <= n; j++)
	{
			if(i+j> n)	//Subarray exceeds array bounds
				break;
				sum+= arr[i+j-1];
			  ans = max(ans,sum);
		}
	}
	return ans;
}
int main()
{
	int num;
	scanf("%d",&num);
	int arr[num+2];
	for(int i=0; i<num; i++)
    {
        cin>>arr[i];
    }
	cout<<M_S_S(arr,num)<<"\n";
	return 0;
}



#include<bits/stdc++.h>
using namespace std;
int M_S_S(int arr[],int n)
{
	int ans = INT_MIN;
	for(int i = 1;i <= n; i++)	{
		for(int j= 0;j < n; j++)				{
			if(j+i > n)	//Subarray exceeds array bounds
				break;
			int sum = 0;
			for(int k = j; k < (j+i); k++)	//O(n)
				sum+= arr[k];
			ans = max(ans,sum);
		}
	}
	return ans;
}
int main()
{
	int num;
	scanf("%d",&num);
	int arr[num+2];
	for(int i=0; i<num; i++)
    {
        cin>>arr[i];
    }
	cout<<M_S_S(arr,num)<<"\n";
	return 0;
}
*/

//3 5 -10 4 5 -10 22  10 -9 -3 5 4
