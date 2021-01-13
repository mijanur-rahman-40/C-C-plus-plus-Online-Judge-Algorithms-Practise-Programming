Given a number n, find the last non-zero digit in n!.
Examples:
Input  : n = 5
Output : 2
5! = 5 * 4 * 3 * 2 * 1 = 120
Last non-zero digit in 120 is 2.
Input  : n = 33
Output : 4
Recommended: Please solve it on “PRACTICE ” first, before moving on to the solution.
A Simple Solution is to first find n!, then find last non-zero digit of n. This solution doesn’t work for even slightly large numbers due to arithmetic overflow.
A Better Solution is based on below recursive formula
Let D(n) be the last non-zero digit in n!
If tens digit (or second last digit) of n is odd
    D(n) = 4 * D(floor(n/5)) * D(Unit digit of n)
If tens digit (or second last digit) of n is even
    D(n) = 6 * D(floor(n/5)) * D(Unit digit of n)
Illustration of formula:
For the numbers less than 10 we can easily find the last non-zero digit by above simple solution, i.e., first computing n!, then finding last digit.
D(1) = 1, D(2) = 2, D(3) = 6, D(4) = 4, D(5) = 2,
D(6) = 2, D(7) = 4, D(8) = 2, D(9) = 8.

D(1) to D(9) are assumed to be precomputed.

Example 1: n = 27 [Second last digit is even]:
D(27) = 6 * D(floor(27/5)) * D(7)
      = 6 * D(5) * D(7)
      = 6 * 2 * 4
      = 48
Last non-zero digit is  8

Example 2: n = 33 [Second last digit is odd]:
D(33) = 4 * D(floor(33/5)) * D(3)
      = 4 * D(6) * 6
      = 4 * 2 * 6
      = 48
Last non-zero digit is  8
How does above formula work?
The below explanation provides intuition behind the formula. Readers may refer Refer http://math.stackexchange.com/questions/130352/last-non-zero-digit-of-a-factorial for complete proof.

14! = 14 * 13 * 12 * 11 * 10 * 9 * 8 * 7 *
                     6 * 5 * 4 * 3 * 2 * 1

Since we are asked about last non-zero digit,
we remove all 5's and equal number of 2's from
factors of 14!.  We get following:

14! = 14 * 13 * 12 * 11 * 2 * 9 * 8 * 7 *
                           6 * 3 * 2 * 1

Now we can get last non-zero digit by multiplying
last digits of above factors!
In n!, number of 2’s are always more than number of 5’s. To remove trailing 0’s, we remove 5’s and equal number of 2’s.

Let a = floor(n/5), b = n % 5. After removing equal number of 5’s and 2’s, we can reduce the problem from n! to 2a * a! * b!

D(n) = 2a * D(a) * D(b)

Implementation:

// C++ program to find last non-zero digit in n!
#include<bits/stdc++.h>
using namespace std;

// Initialize values of last non-zero digit of
// numbers from 0 to 9
int dig[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};

int lastNon0Digit(int n)
{
     if (n < 10)
        return dig[n];
    // Check whether tens (or second last) digit
    // is odd or even
    // If n = 375, So n/10 = 37 and (n/10)%10 = 7
    // Applying formula for even and odd cases.
    if (((n/10)%10)%2 == 0)
        return (6*lastNon0Digit(n/5)*dig[n%10]) % 10;
    else
        return (4*lastNon0Digit(n/5)*dig[n%10]) % 10;
}
// Driver code
int main()
{
    int n = 14;
    cout << lastNon0Digit(n);
    return 0;
}
Run on IDE
Output:

2
#include<stdio.h>

int lastNonZero(int n);

int main()
{
    int number,lastNonZeroDigit;
    int i;

    printf("Enter an integer:");
    scanf("%d",&number);

    lastNonZeroDigit = lastNonZero(number);

    for(i=number-1 ; i>1 ; i--)
        lastNonZeroDigit = lastNonZero(lastNonZeroDigit * i);

    printf("The last Non Zero Digit in %d! = %d.\n",number,lastNonZeroDigit);
}

int lastNonZero(int n) //functn to calculate last non zero digit of 'n'
{
    if(n%10 != 0)
        return n%10;

    else
        return lastNonZero(n/10);
}
