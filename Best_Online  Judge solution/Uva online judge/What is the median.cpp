#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    long long array[100000],num,i=0,l;
    while(cin>>num)
    {
        array[i]=num;

            sort(array,array+i+1);
        if(i%2==0)
            cout<<array[i/2]<<endl;
        else
        {
            l=array[i/2]+array[i/2+1];
            cout<<l/2<<endl;
        }

        i++;
    }
return 0;
}
/*
1
3
4
60
70
50
2
*/
