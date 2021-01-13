#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num; cin>>num;
    int coun=0;
    for(int a=1; a<=num; a++){
        for(int b=a; b<=num; b++){
            int c=a^b;
            if(c<=num && b<=c && a+b>c)
            {
                coun++;
            }
        }
    }
    cout<<coun<<endl;
    return 0;
}
