
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int  i = 20; i >= 0; i--)
	{
		int x = ((1<< i) - 1) * (1<< (i - 1));
		if(n % x == 0)
		{
			cout << x << endl;
			return 0;
		}
	}
}




/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int res=1;
    for(int i=1;i<=n;i++)
     if(n%i==0)
    {
        bool flag=0;
        for(int j=0;j<12;j++)
            isok|=(i==((1<<j)-1)*(1<<(j-1)));
        if(isok)
        res=i;
    }
    printf("%d\n",res);
    return 0;
}
*/
