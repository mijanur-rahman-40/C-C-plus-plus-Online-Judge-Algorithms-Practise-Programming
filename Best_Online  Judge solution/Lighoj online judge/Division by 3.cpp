/*
Analysis:
The number which is number%3=0 and number%3=2 is the answer, because look,
a=3 and b=5 means 123%3=0 [1+2+3=6%3=0], 1234%3=1 [1+2+3+4=10%3=1, which is not answer] and 12345%3=0 [1+2+3+4+5=15%3=0]
now just think about the positive number sequence

1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9, 10, 11, 12 , 13, 14 , 15 , 16 , 17 , 18, 19 , 20 , 21, 22 , 23 , 24, 25;
now do the digit sum for 1 to N by Gaussian formula, what will happen ?
for 1, 1*(1+1)/2=2/2=1%3=1 is not an answer;
    for 2, 2*(2+1)/2=6/2=3%3=0 is an answer;
    for 3, 3*(3+1)/2=12/2=6%3=0 is an answer;
    for 4, 4*(4+1)/2=20/2=10%3=1 is not an answer;
    for 5, 5*(5+1)/2=30/2=15%3=0 is an answer;
    for 6, 6*(6+1)/2=42/2=21%3=0 is an answer;


    and then you will see the 7 is not an answer by above this process
    again 8 and 9 will be an answer but 10 is not, again 11, 12 will be an answer but 13 is not..........

    So, by do this process we will get the sequence like this:

    1[not answer position: 0] , 2 , 3 , 4[not answer position: 3] , 5 , 6 , 7[not answer position: 6] , 8 , 9, 10[not answer position: 9],
    11, 12 , 13[not answer position: 12], 14 , 15 , 16 [not answer position: 15], 17 , 18, 19[not answer position: 18] ,
    20 , 21, 22[not answer position: 21], 23, 24, 25[not answer position: 24] and so on......

Solution Process:
    At first i have found two numbers which are number%3=1 in the given range, then found its position by minus 1 from the real number.
    If the two positions are same then the answer will be difference between two numbers.
    Else i have found between this range how much numbers are existing with 3 distance .
    look, 1 to 4 = 0 to 3[position], 4 to 7 = 3 to 6[position], i mean the position of 4 is 3 and the position of 7 is 6 and then the position of 10
    will be 9 and they are all in 3 distance always.

    So, by df i have found how much numbers are existing with 3 distance.
    And at last, if i get the total difference of the range, then i will do subtract operation with df to find how much numbers are
    divisible by 3 according to the problem statement and it will be the accepted answer :)


#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<cmath>
#include<map>
//#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false)
#define outs(x) cout << x << " "
#define outn(x) cout << x << "\n"
#define sf scanf
#define pf printf
#define high 2147483647

typedef long long LL;
typedef vector<int>vii;
typedef vector<LL>vll;

//void rough(LL x, LL y)
//{
//    LL cnt=0;
//
//    for(LL i=x; i<=y; i++)
//    {
//        if(((i * (i+1)) / 2) % 3 == 0) cnt++;
//    }
//
//    cout << "real ans = " << cnt << "\n";
//}

int main()
{
    int t , tc=0;
    sf("%d", &t);
    while(t--)
    {
        LL a, b;
        sf("%lld %lld", &a , &b);
        //rough(a, b);
        LL tmpa = a, tmpb = b;

        while(a%3==0 or a%3==2)
        {
            a++;
        }

        while(b%3==0 or b%3==2)
        {
            b--;
        }

        LL apos = a-1, bpos = b-1; //cout << apos << " " << bpos << "\n";

        pf("Case %d: ", ++tc);

       if(apos == bpos) pf("%lld\n", tmpb-tmpa);
       else
       {
           LL df = ((bpos - apos) / 3) + 1; //cout << "df = " << df << "\n";
           pf("%lld\n", (tmpb - tmpa + 1) - df);
       }

    }

    return 0;
}



  this is real answer but
void rough(LL x, LL y)
{
    LL cnt=0;

    for(LL i=x; i<=y; i++)
    {
        if(((i * (i+1)) / 2) % 3 == 0) cnt++;
    }

    cout << "real ans = " << cnt << "\n";
}
*/

#include<bits/stdc++.h>
using namespace std;
long int fun(long num)
{
     if(num==0 || num==1)
     {
          return 0;
     }
     return (num-1)-(num-1)/3;
}
int main()
{
     int tst,j=1;
     cin>>tst;
     while(tst--){
           long int A,B;
          cin>>A>>B;
          printf("Case %d: %ld\n",j++,fun(B)-fun(A-1));
     }

}























