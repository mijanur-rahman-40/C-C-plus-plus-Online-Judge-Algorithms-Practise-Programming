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
 // scanf("%d", &tst);
    string a,b;
    char coma;
      cin>>a;
     //scanf("%[^,\n],",coma);
     printf(",");
      cin>>b;
      int numA[MAX]={0},numB[MAX]={0};
      con_Num(numA, a);
      con_Num(numB, b);
      numA[0] += numB[0];
      for( int i=1; i<MAX; ++i ){
        numA[i]+= numB[i] + numA[i-1]/10;
        numA[i-1]=numA[i-1]%10;
      }
      int up,lo;
      for(up= MAX-1; up>0 && numA[up]==0; --up);
     ++up;
      for(lo=0; lo<up && numA[lo]==0; ++lo);
      for( int i = lo; i<up; ++i){
        printf("%d",numA[i]);
      }
      printf("\n");
  return 0;
}
