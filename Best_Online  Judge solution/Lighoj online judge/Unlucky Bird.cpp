#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst,j=1;
     cin>>tst;
     while(tst--){
          double v1,v2,v3,a1,a2,t1,t2,time;
		scanf("%lf%lf%lf%lf%lf",&v1,&v2,&v3,&a1,&a2);
		t1=v1/a1;t2=v2/a2;
		time= max(t1,t2);
           double s1,s2,s,ans;
		ans=time*v3;
		s1=v1*t1+0.5*-a1*t1*t1;
		s2=v2*t2+0.5*-a2*t2*t2;
          s=s1+s2;
		printf("Case %d: %.09lf %.09lf\n",j++,s,ans);
	}
	return 0;
}
