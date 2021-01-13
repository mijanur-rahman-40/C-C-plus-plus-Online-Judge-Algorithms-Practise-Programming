#include<bits/stdc++.h>
using namespace std;
int main()
{
  long  long int fact=1;
  int num,num1;
  while(scanf("%d%d",&num,&num1)==2){;
	for(long long int i=1;i<=num;i++)
	{
        fact=((fact%num1)*(i%num1))%num1;

	}
	printf("%lld\n",fact);
	fact=1;
  }
    return 0;
}
