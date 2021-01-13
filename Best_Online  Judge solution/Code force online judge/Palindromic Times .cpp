/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,m;
    char c;
    cin>>h>>c>>m;

    while (1>0)
    {
        m++;
        h+=(m/60);
        m%=60;
        h%=24;
        if (h/10==m%10 && h%10==m/10)
        {
            break;
        }
    }
    cout<<h/10<<h%10<<":"<<m/10<<m%10<<endl;
    return 0;
}
*/
#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int hour[]={0, 1, 2, 3, 4, 5,10,11,12,13,14,15,20,21,22,23};
int minute[]={0,10,20,30,40,50,1 ,11,21,31,41,51, 2,12,22,32};

int main()
{
	char ch;
	int h,m;
	cin>>h>>ch>>m;
	for(int i=0;i<16;i++)
	{
		if((hour[i]==h && minute[i]>m) || hour[i]>h)
		{
			if(hour[i]<10)cout<<"0";
			cout<<hour[i]<<":";
			if(minute[i]<10)cout<<"0";
			cout<<minute[i]<<endl;
			return 0;
		}
	}
	cout<<"00:00"<<endl;
	return 0;
}














/*

{
    string str;
    cin >> str;
    int flag=0;
    if( equal(str.begin(), str.begin() + str.size()/2, str.rbegin()) ){
        flag=1;
}
    if(flag==1){
        if((str[0]<=2 || str[0]>=0) && (str[3]<=5 || str[3]>=0))
       {
            str[1]=str[1]+1;
             str[3]=str[3]+1;

       printf("%c%c:%c%c\n",str[0],str[1],str[3],str[4]);
    }
    else if(str[1]>=9){
             printf("00:00\n");
    }
    }
    else{
        printf("00:00\n");
    }
    return 0;
}
*/

