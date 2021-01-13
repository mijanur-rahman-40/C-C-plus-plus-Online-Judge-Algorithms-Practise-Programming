#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, pRead, cRead;
    cin >> n;
    int cLength = 0;
    int mLength = 0;
    cin >> pRead;
    for (int i = 1; i < n; i++) {
        cin >> cRead;
        if (pRead < cRead) {
            cLength++;
            mLength = max(cLength, mLength);
        }
        else {
            cLength = 0;
        }
        pRead = cRead;
    }
    cout << mLength + 1;
    return 0;
}

#include<stdio.h>
int main()
{
    int arr1[100],arr2[100];
    int i,j,n;
    for(;;){
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d",&arr1[i]);
    }
    int count=0;
    j=0;
    for(i=0;i<n-1;i++){
        if(arr1[i]<arr2[i+1])
            count++;
    }
    printf("%d",count);
    }
    return 0;
}
