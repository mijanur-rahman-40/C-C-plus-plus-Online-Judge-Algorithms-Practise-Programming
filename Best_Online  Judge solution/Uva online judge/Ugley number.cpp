/*

#include<bits/stdc++.h>
using namespace std;
bool uglynumber(long int num)
{
    /*
    not correct
    if(num%2==0) return 1;
    else if(num%3==0) return 1;
    else if(num%5==0) return 1;
    else
        return 0;

        while(num%2==0) num/=2;
        while(num%3==0) num/=3;
        while(num%5==0) num/=5;
        return num==1;
}

int main()

{
    int coun=1, i;
    for( i=2; ; i++){
        if(uglynumber(i)){
            coun++;
        }
        if(coun==1500){
            break;
        }
    }
    cout<<"The 1500'th ugly number is <"<<i<<">."<<endl;
}
*/




#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1503];
    int a=1,b=1,c=1,num=1;
    int x,y,z;
    arr[1]=1;
    while(num!=1500){
        x=2*arr[a];
        y=3*arr[b];
        z=5*arr[c];
        num++;
        arr[num]=min(x,min(y,z));
        if(arr[num] == x)
        {
            a++;
        }
        if(arr[num] == y)
        {
            b++;
        }
        if(arr[num] == z)
        {
            c++;
        }
    }
     cout<<"The 1500'th ugly number is "<<arr[1500]<<"."<<endl;
}
