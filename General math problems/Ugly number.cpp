/*

#include <stdio.h>
int main()
{
int x,i,n,temp;
   printf("Enter a number: ");
   scanf("%d", &n);     // Reads a number till which ugly numbers are to be printed
   for(i=1;i<=n;i++)
   {
       temp =i;
        x=i;// Using While Loops we can check if number is ugly or not.
               while (x%2==0)    // Checking if completely divisible by 2
                          x = x/2;
               while (x%3==0)   // Checking if completely divisible by 3
                       x = x/3;
               while (x%5==0)// Checking if completely divisible by 5
                       x = x/5;
//After repeatedly dividing with the numbers 2,3,5  if the part left is 1 then it is ugly
printf("ugly numbers are :");
if(x == 1)
      {
printf("%d \n",temp);
       }
    }
    return 0;
}

*/


// C++ program to find n'th Ugly number
# include<bits/stdc++.h>
using namespace std;

/* Function to get the nth ugly number*/
unsigned getNthUglyNo(unsigned n)
{
    unsigned ugly[n]; // To store ugly numbers
    unsigned i2 = 0, i3 = 0, i5 = 0;
    unsigned next_multiple_of_2 = 2;
    unsigned next_multiple_of_3 = 3;
    unsigned next_multiple_of_5 = 5;
    unsigned next_ugly_no = 1;

    ugly[0] = 1;
    for (int i=1; i<n; i++)
    {
       next_ugly_no = min(next_multiple_of_2,
                           min(next_multiple_of_3,
                               next_multiple_of_5));
       ugly[i] = next_ugly_no;
       if (next_ugly_no == next_multiple_of_2)
       {
           i2 = i2+1;
           next_multiple_of_2 = ugly[i2]*2;
       }
       if (next_ugly_no == next_multiple_of_3)
       {
           i3 = i3+1;
           next_multiple_of_3 = ugly[i3]*3;
       }
       if (next_ugly_no == next_multiple_of_5)
       {
           i5 = i5+1;
           next_multiple_of_5 = ugly[i5]*5;
       }
    } /*End of for loop (i=1; i<n; i++) */
    return next_ugly_no;
}

/* Driver program to test above functions */
int main()
{
    int n = 34;
    cout << getNthUglyNo(n);
    return 0;
}



public class Solution {
    public int nthUglyNumber(int n) {
        int[] ugly = new int[n];
        ugly[0] = 1;
        int index2 = 1, index3 = 1, index5 = 1;
        int factor2 = 2, factor3 = 3, factor5 = 5;

        for(int i = 1; i < n; i++) {
            int min = Math.min(Math.min(factor2, factor3), factor5);
            ugly[i] = min;
            if(min == factor2) {
                factor2 = 2 * ugly[index2++];
            }
            if(min == factor3) {
                factor3 = 3 * ugly[index3++];
            }
            if(min == factor5) {
                factor5 = 5 * ugly[index5++];
            }
        }
        return ugly[n-1];
    }
}
