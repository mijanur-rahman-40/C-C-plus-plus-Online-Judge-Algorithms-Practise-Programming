
#include<bits/stdc++.h>
using namespace std;
const int MAX=1e5;
vector<long long>vec;
void factors(long long num,long long k)
{
    long long i,j=0;
    for(i=1;i<=sqrt(num);i++){
        if(num%i==0){
           vec.push_back(i);
            if(i!=sqrt(num))
               vec.push_back(num/i);
        }
    }
    sort(vec.begin(),vec.end());
    if(vec.size()>=k){
     printf("%lld\n",vec[k-1]);
    }
    else
      printf("-1\n");
}
int main()
{
    long long int num,k;
    scanf("%lld%lld",&num,&k);
    factors(num,k);
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
const int MAX=1e5;
long long ans[MAX];
void factors(long long  num,long long  k)
{
    long long i,j=0;
    for(i=1; i<=sqrt(num); i++)
    {
        if(num%i==0)
        {
            ans[j++]=i;
            if(i!=sqrt(num))
               ans[j++]=num/i;
        }
    }
    sort(ans,ans+j);
    if(j>=k){
     printf("%lld\n",ans[k-1]);
    }
    else
      printf("-1\n");
}
int main()
{
    long long int num,k;
   scanf("%lld%lld",&num,&k);
    factors(num,k);
    return 0;
}

*/
/*
#include<bits/stdc++.h>
using namespace std;
const int MAX=1103+1e5;
long long ans[MAX];
int main() {
	long long int num,k,j;
	scanf("%lld%lld",&num,&k);
	int count =1;
	for(j=1;j<=sqrt(num);j++){
		if(num%j == 0){
			ans[count]=j;
			count++;
			if(j*j==num)
                    break;
			ans[count]=num/j;
			count++;
		}
	}
	count--;
	if(k <= count){
		sort(ans+1,ans+count+1);
		printf("%lld\n", ans[k]);
	} else {
		printf("-1\n");
	}
	return 0;
}


*/
