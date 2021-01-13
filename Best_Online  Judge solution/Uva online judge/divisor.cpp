/*
#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,k,l,p,h,testcase,max,answer;
long int divisorcount(long int n)
{
int s,count=0;
for(i=1;i*i<=n;i++)
{
 if(n%i==0)
 count+=2;
 s=i;
 if(s*s==n)
 count--;

}
	return count;
}

int main()
{

	while(scanf("%lld",&testcase)!=EOF)
	{
	 while(testcase--)
	 {
	  scanf("%lld %lld",&l,&h);
	  	 max=divisorcount(l);
	  	 answer=l;
	  	 for(j=l+1;j<=h;j++) 	  	 {
        k=divisorcount(j);
         if(k>max)
			 {
			 max=k;
			 answer=j;
		 }
			}
		 printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,h,answer,max);
	}

	}
	return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,u;
    scanf("%d",&t);
    while(t--)
    {
        int num,s=0;
        scanf("%d%d",&l,&u);
        for(int i=l;i<=u;i++)
        {
            int count=0;
            for(int j=1;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    count++;
                }
            }
            int tmp=sqrt(i);
            if(tmp==sqrt(i))
            {
                count=count*2-1;
            }
            else
            {
                count=count*2;
            }

            if(count>s)
            {
                s=count;
                num=i;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",l,u,num,s);
    }
    return 0;
}
