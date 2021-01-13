#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst,t,k;cin>>tst;
    for(t=0; t<tst; t++ ){
        int ampl,freq,temp;
        cin>>ampl>>freq;
        temp=freq;
       for(k=0; k<freq; k++){
        for(int i=ampl; i>=1; i--){
            for(int j=i; j<ampl+1; j++){
                cout<<ampl+1-i;
            }
            cout<<endl;
        }
        for(int i=ampl; i>1; i--){
            for(int j=i; j>1; j--){
                cout<<i-1;
            }
             cout<<endl;
        }
        /*
        j++;
        if(j<temp){
        cout<<endl;
        }
        */
        if(t!=tst-1 || k!=freq-1){
            cout<<endl;
        }
        }
    }
    return 0;
}
