/*
#include<bits/stdc++.h>
using namespace std;
int arr[95];
int main()
{
    int t, i, j, k, count, len, l, max=0;
    char a[500];
    scanf("%d",&t);
    getchar();
   while(t--)
    {
        gets(a);
        for(j='A';j<='Z';j++){
            for(l=0;l<strlen(a);l++){
                if(toupper(a[l])==j)
                    arr[j]++;
            }
            if(arr[j]>max)
                max = arr[j];
        }
    }
    for(i=max; i>0; i--)
    {
        for(j='A'; j<='Z'; j++)
        {
            if(arr[j]==i)
                printf("%c %d\n",j,i);
        }
    }
    return 0;
}
*/

















