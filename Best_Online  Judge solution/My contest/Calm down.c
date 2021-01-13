#include<stdio.h>
#include<math.h>
int main()
{
	int t,i=1,n;
	double r,R;
	scanf("%d",&t);
	while(t--){
		scanf("%lf",&R);
		scanf("%d",&n);
		r=(sin(2*acos(0.0)/n)*R)/(1+sin(2*acos(0.0)/n));
		printf("Case %d: %lf\n",i++,r);

	}
	return 0;
}
