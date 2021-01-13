/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    char a[205], b[205];
    int i, ans[205];
    while (n--)
    {
        for (i = 0; i < 205; i++)
        {
            b[i] = a[i] = '0';
            ans[i] = 0;
        }
        scanf("%s%s", a, b);
        int len1 = strlen(a), len2 = strlen(b), temp;
		for (i = len1 - 1; i >= 0; i--)
            if (a[i]!='0')
                break;
            else
                len1--;
        for (i = len2 - 1; i >= 0; i--)
            if (b[i]!='0')
                break;
            else
                len2--;
        for (i = 0; i < len1; i++){
            ans[i] = a[i] - '0';
             printf(" %d ",ans[i]);
        }
        printf("\n");
        for (i = 0; i < len2; i++){
            ans[i] += b[i] - '0';
            printf(" %d ",ans[i]);
        }
        printf("\n");

        temp = max(len1, len2);
        for (i = 0; i < temp; i++){
            if (ans[i] >= 10){
                if (i == temp - 1)
                    temp++;
                ans[i + 1] += ans[i] / 10;
                 printf(" %d ",ans[i+1]);
                ans[i] %= 10;
                 printf(" %d ",ans[i]);
            }
        }
        printf("\n");
        for (i = 0; i < temp; i++)
            if (ans[i])
                break;
       for (; i < temp; i++)
            putchar('0' + ans[i]);
        putchar('\n');
    }
    return 0;
}
*/

//ata valo

#include <bits/stdc++.h>
using namespace std;
const int MAX =205;
void con_Num(int num[],string str){
  for( int i=0; i<str.length(); ++i ){
    num[i]=str[i]-'0';
  }
}
int main(){
  int tst;
  scanf("%d", &tst);
    string a,b;
    while(tst--){
      cin>>a>>b;
      int numA[MAX]={0},numB[MAX]={0};
      con_Num(numA, a);
      con_Num(numB, b);
      numA[0] += numB[0];
  // printf("%d  ",numA[0]);
   //printf("\n");
      for( int i=1; i<MAX; ++i ){
        numA[i]+= numB[i] + numA[i-1]/10;
        //printf("%d ",numA[i]);
        numA[i-1]=numA[i-1]%10;
        // printf("%d ",numA[i-1]);
      }
      // printf("\n");
      int up,lo;
      for(up= MAX-1; up>0 && numA[up]==0; --up);
     ++up;
     //printf("up %d ",up);
      for(lo=0; lo<up && numA[lo]==0; ++lo);
      //printf("lo %d ",lo);
      for( int i = lo; i<up; ++i){
        printf("%d",numA[i]);
      }
      printf("\n");
    }
  return 0;
}
