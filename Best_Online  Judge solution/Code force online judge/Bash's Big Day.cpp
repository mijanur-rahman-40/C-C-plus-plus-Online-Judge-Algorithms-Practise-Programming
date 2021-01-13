
#include <bits/stdc++.h>
#define maxn 100100
using namespace std;
int vis[maxn]={0};
int main()
{
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		for (int i =0;i<n;i++){
			int num;
			scanf("%d", &num);
			for (int i=1;i<=sqrt(num);i++){
				if (num %i==0){
					vis[i]++;
					if(num!=i*i)
						vis[num/i]++;
				}
			}
		}
		int ans =1;
		for (int i =2;i<maxn;i++)
			ans =max(ans,vis[i]);
		printf("%d\n", ans);
	}
	return 0;
}
