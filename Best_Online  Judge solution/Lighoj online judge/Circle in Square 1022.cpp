#include<bits/stdc++.h>
using namespace std;
int main()
{
	double r,s_area,c_area,area;
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		scanf("%lf", &r);
		c_area = 2 * acos(0.0) * r * r;
		s_area = (2 * r) * (2 * r);
		area = s_area - c_area;
		printf("Case %d: %.2lf\n",i, area);
	}


}
