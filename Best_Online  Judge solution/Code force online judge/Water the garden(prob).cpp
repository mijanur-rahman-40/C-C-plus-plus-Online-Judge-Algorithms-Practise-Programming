#include <bits/stdc++.h>
using namespace std;
int t, n, k;
int main() {
	scanf("%d", &t);
	for (int tt = 0; tt < t; tt++) {
		scanf("%d%d", &n, &k);
		int l = 0, r;
		int z = 0;
		for (int i = 0; i < k; i++) {
			scanf("%d", &r);
			if (l == 0) {
				z = max(z, r);
			} else {
				z = max(z, (r - l) / 2 + 1);
			}
			l = r;
		}
		z = max(z, (n - l + 1));
		printf("%d\n", z);
	}
}
#include<stdio.h>
#include<algorithm>
using namespace std;
int a[205],ans[205];
int main(void)
{
	int n,k,i,j,T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&n,&k);
		for(i=1;i<=n;i++)
			ans[i]=1000;
		for(i=1;i<=k;i++)
			scanf("%d",&a[i]);
		for(i=1;i<=n;i++)
			for(j=1;j<=k;j++)
				ans[i]=min(abs(a[j]-i)+1,ans[i]);
		int mx=0;
		for(i=1;i<=n;i++)
			mx=max(mx,ans[i]);
		printf("%d\n",mx);
	}
	return 0;
}
