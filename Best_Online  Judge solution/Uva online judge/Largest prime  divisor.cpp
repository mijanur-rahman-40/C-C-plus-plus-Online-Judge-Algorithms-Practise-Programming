
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num;
    while(scanf("%lld",&num) && num){
            if(num < 0 )
            num = num*(-1);
        long long temp = 0,ans;
        ans = num;
        int coun = 0;
        vector<long long>vec;
        for(long long i=2; i*i<=num; i++){
            while(ans%i==0)
            {
                if(temp!=i){
                    coun++;
                }
                    temp = i;
                    ans = ans / i;
              vec.push_back(i);
            }
        }
        if(ans!=1){
            coun++;
            vec.push_back(ans);
        }
        sort(vec.begin(),vec.end());
        if(coun == 1 || coun == 0){
            cout<<"-1"<<endl;
        }
        else
            cout<<vec[vec.size()-1]<<endl;
    }
}


/*
23458726407
7819575469
*/
