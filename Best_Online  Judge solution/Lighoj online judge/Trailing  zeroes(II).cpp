#include<bits/stdc++.h>
using namespace std;
int prime_factorize(int N, int x)
{
    int coun = 0;
    while(N % x == 0)
    {
        coun++;
        N = N / x;
    }
    return coun;
}
int num_2_or_5_coun(int N,int M)
{
     int sum=0;
     while(N>0){
          sum+=N/M;
          N=N/M;
     }
     return sum;
}
int main()
{
     int N,R,P,Q,Tst,j=1;
     scanf("%d",&Tst);
     while(Tst--){
          scanf("%d%d%d%d",&N,&R,&P,&Q);
          printf("Case %d:",j++);
          int x=prime_factorize(P,2);
          int y=prime_factorize(P,5);
          int i=num_2_or_5_coun(N,2);
          int k=num_2_or_5_coun(R,2);
          int m=num_2_or_5_coun(N-R,2);
          int j=num_2_or_5_coun(N,5);
          int l=num_2_or_5_coun(R,5);
          int n=num_2_or_5_coun(N-R,5);
          int ans2=i-k-m+Q*x;
          int ans5=j-l-n+Q*y;
          if(ans2>ans5){
           printf(" %d\n",ans5);
     }
     else{
          printf(" %d\n",ans2);
     }
     }
     return 0;
}























/*
#include <stdio.h>
#include <conio.h>
int main() {
	int n , r, ncr( int , int);
	long npr( int , int);
	long double fact( int);
	printf(" Enter value of n & r \n");
	scanf("%d %d",&n , &r);
	if( n>= r) {
		printf( " %dC%d is %d\n", n,r,ncr( n , r));
		printf(" %dP%d  is %ld", n,r,npr( n, r));
	} else {
		printf("WRONG INPUT?? enter the correct input");
	}
}
long double fact( int p) {
	long double facts = 1;
	int i;
	for ( i = 1; i<= p; i++)
	  facts = facts * i;
	return( facts);
}
int ncr ( int n, int r) {
	return( fact( n) / (fact( r) * fact(n- r) ) ) ;
}
long npr( int n , int r) {
	return( fact( n) / fact( n- r));
}
*/
