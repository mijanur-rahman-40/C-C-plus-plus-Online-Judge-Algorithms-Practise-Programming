/*

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <limits.h>
using namespace std;
int q;
int n;


inline int zeros(int n) {
	int ret = 0;
	while(n > 0) {
		n /= 5;
		ret += n;
	}

	return ret;
}

int explore(int start, int end)
{
	int mid;
	int count;
	int t;

	if(start > end) {
		return -1;
	}

	mid = (start + end) / 2;

	count = zeros(mid);

	if(count == n) {

		while(zeros(mid) == n) {
			mid--;
		}
		return ++mid;
	}

	if(count < n) {
		return explore(mid+1, end);
	}

	else {
		return explore(start, mid-1);
	}

}

int main()
{

	int t;
	int ans;

	scanf("%d", &t);

	for (int cs = 1; cs <= t; cs++) {
		scanf("%d", &n);
		ans = explore(1,n);
		if(ans != -1) {
			printf("Case %d: %d\n", cs, ans);
		}
		else {
			printf("Case %d: impossible\n", cs);
		}
	}


}
*/
#include<cstdio>
//const int INF=500000001;
const int MAX=500000001;
int multiflier_5(int x)
{
    int ans=0;
    while(x!=0)
    {
        ans+=x/5;
        x/=5;
    }
    return ans;
}
int main()
{
    int T,low,mid,high,j=1,num;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&num);
        low=0;
        high=MAX;
        while(low<=high)
        {
            mid=(low+high)/2;
            int A=multiflier_5(mid);
            if(A>=num)
                high=mid-1;
            else
                low=mid+1;
        }
        int B=multiflier_5(low);
        if(B==num)
            printf("Case %d: %d\n",j++,low);
        else
            printf("Case %d: impossible\n",j++);
    }
    return 0;
