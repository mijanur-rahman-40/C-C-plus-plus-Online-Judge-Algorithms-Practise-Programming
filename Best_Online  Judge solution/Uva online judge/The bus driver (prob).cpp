
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int tst,max_len,hour;

    while((cin>>tst>>max_len>>hour),tst||max_len||hour){
    int num[1000],num1[1000];
    for(int i=0; i<tst; i++){
        cin>>num[i];
    }
    sort(num,num+tst);
    for(int i=0; i<tst; i++){
        cin>>num1[i];
    }
    sort(num1,num1+tst, greater<int>());
    int ans=0;
    for(int i=0; i<tst ;i++){
        if(num[i]+num1[i]>max_len){
            ans+=(num[i]+num1[i]-max_len)*hour;
        }
    }

    cout<<ans<<endl;
    }
    return 0;

}
/*
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	int n, d, r;
	int hrs, morn[100], aft[100];
	int pay;

	while (scanf("%d %d %d", &n, &d, &r), n || d || r) {
		pay = 0;

		for (int i = 0; i < n; i++) {
			scanf("%d", &morn[i]);
		}
		sort(morn, morn + n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &aft[i]);
		}
		sort(aft, aft + n);
		//sort(aft, aft + n, greater<int>());

		for (int i = 0; i < n; i++) {
			hrs = morn[i] + aft[i];
			if (hrs > d)
				pay += (hrs - d) * r;
		}

		printf("%d\n", pay);
	}

	return 0;
}
*/
