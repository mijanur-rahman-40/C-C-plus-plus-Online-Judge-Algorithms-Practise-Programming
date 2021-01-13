#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of your array:";
    cin>>n;
    int ar[n];
    cout<<"Now enter the elements:";
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    cout<<endl;
    int x;
    cout<<"Enter 1,2 or 3 for different precesses.\n";
    cin>>x;
    if(x==1)
    {
        cout<<"Enter a number to be added in the first position of your array:";
        int a;
        cin>>a;
        for(int i=n; i>0; i--)
        {
            ar[i]=ar[i-1];
        }
        ar[0]=a;
        cout<<"The elements of the new array are:";
        for(int i=0; i<=n; i++)
        {
            cout<<ar[i]<<" ";
        }
    }
    else if(x==2)
    {
        cout<<"Enter an index:";
        int in1;
        cin>>in1;
        for(int i=in1; i<n; i++)
        {
            ar[i]=ar[i+1];
        }
        ar[n-1]=0;
        cout<<"The elements of the new array are:";
        for(int i=0; i<n-1; i++)
        {
            cout<<ar[i]<<" ";
        }

    }
    else if(x==3)
    {
        cout<<"Enter an index:";
        int in2,num;
        cin>>in2;
        cout<<"Enter a number:";
        cin>>num;
        ar[in2]=num;
        cout<<"The elements of the new array are:";
        for(int i=0; i<n; i++)
        {
            cout<<ar[i]<<" ";
        }
    }
    return 0;
}
