#include <iostream>
#include <cstdlib>
using namespace std;
int a,b,n,ans;
int main(){
	cin>>n>>a>>b;
	for(int i=1;i<n;i++)
     {
          ans=max(ans,min(a/i,b/(n-i)));
     }
	cout<<ans<<endl;
	return 0;
}
