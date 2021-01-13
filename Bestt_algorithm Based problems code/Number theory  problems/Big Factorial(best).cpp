
#include<bits/stdc++.h>
using namespace std;
#define MAX 500
int j,temp;
int res1[1000];
int multiply(int x, int res[], int res_size)
{
    int carry = 0;
    for ( int i=0; i<res_size; i++)
    {
         int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry  = prod/10;
    }
    while (carry!=0)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
void factorial(int n)
{
    int res[MAX];
    res[0] = 1;
    int res_size = 1;
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);

    cout << "Factorial of given number "<<n<<" is  ";
    for ( int i=res_size-1,j=0; i>=0; i--){
     printf("%d",res[i]);
    }
   // printf("%d",j);
        printf("\n");
}

int main()
{
     int num;
    while(scanf("%d",&num)==1){
    factorial(num);
     }
    return 0;
}

/*

#include <bits/stdc++.h>

using namespace std;

void mult(int a[],int b[],int l1)
{
	int ans[200] = {0},i,j,tmp;
	for(i = 0;i < 180;i++)
    {
        for(j = 0;j < l1;j++)
        {
            ans[i+j] += a[i]*b[j];
        }
    }
    for(i = 0;i < l1+160;i++)
    {
        tmp = ans[i]/10;
        ans[i] = ans[i]%10;
        ans[i+1] = ans[i+1] + tmp;
    }
    for (i = 0; i < 200; ++i)
    {
    	a[i] = ans[i];
    }
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j;
		scanf("%d",&n);
		int ans[200]={0},a[200]={0};
		if(n == 1)
			printf("1\n");
		else
		{
			ans[0] = 1;
			for (i = 1; i <= n; ++i)
			{
				int x = i,k = 0;
				while(x > 0)
				{
					a[k] = x%10;
					x/=10;
					k++;
				}
				mult(ans,a,k);
			}
			for(i = 199; i>= 0;i--)
		    {
		        if(ans[i] > 0)
		            break;
		    }
		    for(;i >= 0;i--)
		    {
		        printf("%d",ans[i]);
		    }
		    printf("\n");
		}
	}
	return 0;
}

*/
/*


// C++ program to compute factorial of big numbers
#include<iostream>
using namespace std;

// Maximum number of digits in output
#define MAX 500

int multiply(int x, int res[], int res_size)

// This function finds factorial of large numbers and prints them
int  factorial(int n)
{
    int res[MAX];

    // Initialize result
    res[0] = 1;
    int res_size = 1;

    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);

    cout << "Factorial of given number is n";
    for (int i=res_size-1; i>=0; i--)
        cout << res[i];
}

// This function multiplies x with the number represented by res[].
// res_size is size of res[] or number of digits in the number represented
// by res[]. This function uses simple school mathematics for multiplication.
// This function may value of res_size and returns the new value of res_size
int multiply(int x, int res[], int res_size)
{
    int carry = 0;  // Initialize carry

    // One by one multiply n with individual digits of res[]
    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;  // Store last digit of 'prod' in res[]
        carry  = prod/10;    // Put rest in carry
    }

    // Put carry in res and increase result size
    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}

// Driver program
int main()
{
    factorial(100);
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
int a[200],index,i,j,n,tmp,counter=0;
printf("\n Enter the no : ");
scanf("%d",&n);
a[0]=1;
index=0;
//Calculation Loop
for(j=n;j>=2;j--){
    tmp=0;
    //This Loop is used to multiply the numbers
    for(i=0;i<=index;i++){
        tmp=(a[i]*j)+tmp; // here tmp is carry digir which should be added to next multiplied value
        a[i]=tmp%10; // Extracting last digit of number
        tmp=tmp/10; // Extracring carry digir
    }
    // This loop helps you to extract digits from last calculated carry digits
    // Supposse last carry digit is 25 then we must extract each digit( 5 & 2) and store it into array
    while(tmp>0){
        a[++index]=tmp%10;
        tmp=tmp/10;
    }
}
//Loop to print output of calculated factorial
printf("\n The factorial of %d is : \n",n);
for(i=index;i>=0;i--)
    printf("%d",a[i]);
return 0;
}
*/
