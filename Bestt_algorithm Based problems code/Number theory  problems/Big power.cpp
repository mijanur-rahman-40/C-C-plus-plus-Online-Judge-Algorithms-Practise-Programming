// like this 2^4
/*
#include<bits/stdc++.h>
using namespace std;
long power(long a,long n)
{
    if(n==1) return a;

    if(n%2==1)
    return a*power(a,n-1);

    long int temp;
    temp=power(a,n/2);
    return temp*temp;
}
int main()
{
   long int a,n;
    scanf("%ld%ld",&a,&n);
    printf("%ld\n",power(a,n));
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int power(int a,int n)
{
    string bin="10100";
    int temp;
    while(n>0)
    {
        temp=n%2;
        if(temp==0) bin+="0";
        else bin+="1";
        n/=2;
    }
    reverse(bin.begin(),bin.end());
    // bin নামক  স্ট্রিং এ এখন আমাদের n এর বাইনারী ফর্ম টি সেইভড!

    int res=1; // এই সেই 5^0,যা আমি উদাহরণে ব্যবহার করেছিলাম

    for(int i=0; i<bin.size(); i++)
    {
        res=res*res;
        if(bin[i]=='1') res=a*res;
    }
    return res;
}
int main()
{
    int a,n;
    scanf("%d%d",&a,&n);
    printf("%d\n",power(a,n));
    return 0;
}
*/
#include<stdio.h>
#include<string.h>
#define MAX 10000

char * multiply(char [],char[]);
int main(){
    char a[MAX];
    char *c;
    int i,n;
    printf("Enter the base number: ");
    scanf("%s",a);
    printf("Enter the power: ");
    scanf("%d",&n);

    printf("Power of the %s^%d: ",a,n);

    c = multiply(a,"1");
    for(i=0;i<n-1;i++)
         c = multiply(a,c);

    while(*c)
    if(*c =='0')
         c++;
    else
         break;

    printf("%s",c);
    return 0;
}

char * multiply(char num1[],char num2[]){
    static char mul[MAX];
    char a[MAX];
    char b[MAX];
    char c[MAX];
    char temp[MAX];
    int la,lb;
    int i=0,j,k=0,x=0,y;
    long int r=0;
    long sum = 0;


    while(num1[i]){
         a[i] = num1[i];
         i++;
    }
    a[i]= '\0';

    i=0;
    while(num2[i]){
         b[i] = num2[i];
         i++;
    }
    b[i]= '\0';

    la=strlen(a)-1;
        lb=strlen(b)-1;

        for(i=0;i<=la;i++){
                a[i] = a[i] - 48;
        }

        for(i=0;i<=lb;i++){
                b[i] = b[i] - 48;
        }

    for(i=lb;i>=0;i--){
         r=0;
         for(j=la;j>=0;j--){
             temp[k++] = (b[i]*a[j] + r)%10;
             r = (b[i]*a[j]+r)/10;
         }
         temp[k++] = r;
         x++;
         for(y = 0;y<x;y++){
             temp[k++] = 0;
         }
    }

    k=0;
    r=0;
    for(i=0;i<la+lb+2;i++){
         sum =0;
         y=0;
         for(j=1;j<=lb+1;j++){
             if(i <= la+j){
                 sum = sum + temp[y+i];
             }
             y += j + la + 1;
         }
         c[k++] = (sum+r) %10;
         r = (sum+r)/10;
    }
    c[k] = r;
    j=0;
    for(i=k-1;i>=0;i--){
         mul[j++]=c[i] + 48;
    }
    mul[j]='\0';
    return mul;
}

#include <stdio.h>

int modular(int base, unsigned int exp, unsigned int mod)
{
    int x = 1;
    int i;
    int power = base % mod;

    for (i = 0; i < sizeof(int) * 8; i++) {
        int least_sig_bit = 0x00000001 & (exp >> i);
        if (least_sig_bit)
            x = (x * power) % mod;
        power = (power * power) % mod;
    }

    return x;
}

int main(void) {
  printf("123^456mod567 = %d\n", modular(123, 456, 567));
}

