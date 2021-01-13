
#include<bits/stdc++.h>
using namespace std;
#define maxn 100010
char s[maxn];
int n,k;
int suma[maxn],sumb[maxn];
int check(int x)
{
	for(int i=x;i<=n;i++)
		if(suma[i]-suma[i-x]<=k || sumb[i]-sumb[i-x]<=k)
            return true;
	return false;
}
int main(void)
{
	scanf("%d%d",&n,&k);
	getchar();
	gets(s+1);
	cout<<s+1<<endl;
	for(int i=1;i<=n;i++)
	{
		suma[i] = suma[i-1];
		sumb[i] = sumb[i-1];
		if(s[i]=='a')suma[i]++;
		else sumb[i]++;
	}
	int L = 0,R = n,ans = 0;
	while(L<=R)
	{
		int mid = (L+R)>>1;
		if(check(mid)){
			ans = mid;
			L = mid+1;
		}else{
			R = mid-1;
		}
	}
	cout<<ans;
	return 0;
}

/*
#include <cstdio>
#include <algorithm>
using namespace std;
int const MAX = 1e5 + 5;
char s[MAX];
int n, k;

int cal(char x)
{
    int l = 0, r = 0, ans = 0, cnt = 0;
    while(l < n && r < n)
    {
        while((s[r] == x || cnt < k) && r < n)
        {
            if(s[r] != x)
                cnt ++;
            r ++;
        }
        ans = max(ans, r - l);
        while(s[l] == x && l <= r)
            l ++;
          l ++;
        cnt --;
    }
    return ans;
}

int main()
{
    scanf("%d %d", &n, &k);
    scanf("%s", s);
    printf("%d\n", max(cal('a'), cal('b')));
}
*/
