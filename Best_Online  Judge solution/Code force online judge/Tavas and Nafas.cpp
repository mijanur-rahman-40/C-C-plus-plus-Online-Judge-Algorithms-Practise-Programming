
#include<bits/stdc++.h>
using namespace std;
int main(){
string arr1[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
string arr2[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
string arr3[]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
       int num,i,j;
       cin>>num;
        i=num%10;
        j=num/10;

        if(num<10){
            cout<<arr1[num]<<endl;
        }
       else if(num>=10 && num<=19){
            cout<<arr2[i]<<endl;
        }
      else if(num%10==0 && num>10){
        cout<<arr3[j-2]<<endl;
      }
        else
            cout<<arr3[j-2]<<"-"<<arr1[i]<<endl;
}




















/
