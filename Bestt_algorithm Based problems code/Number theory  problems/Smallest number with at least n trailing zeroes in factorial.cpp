Given a number n. The task is to find the smallest number whose factorial contains at least n trailing zeroes.

Examples:

Input : n = 1
Output : 5
1!, 2!, 3!, 4! does not contain trailing zero.
5! = 120, which contains one trailing zero.

Input : n = 6
Output : 25
Recommended: Please solve it on “PRACTICE” first, before moving on to the solution.

In the article for Count trailing zeroes in factorial of a number, we have discussed number of zeroes is equal to number of 5’s in prime factors of x!. We have discussed below formula to count number of 5’s.

Trailing 0s in x! = Count of 5s in prime factors of x!
                  = floor(x/5) + floor(x/25) + floor(x/125) + ....
Let us take few examples to observe pattern

5!  has 1 trailing zeroes
[All numbers from 6 to 9
 have 1 trailing zero]

10! has 2 trailing zeroes
[All numbers from 11 to 14
 have 2 trailing zeroes]

15! to 19! have 3 trailing zeroes

20! to 24! have 4 trailing zeroes

25! to 29! have 6 trailing zeroes
We can notice that, the minimum value whose factorial contain n trailing zeroes is 5*n.

So, to find minimum value whose factorial contains n trailing zeroes, use binary search on range from 0 to 5*n. And, find the smallest number whose factorial contains n trailing zeroes.

// C++ program tofind smallest number whose
// factorial contains at least n trailing
// zeroes.
#include<bits/stdc++.h>
using namespace std;

// Return true if number's factorial contains
// at least n trailing zero else false.
bool check(int p, int n)
{
    int temp = p, count = 0, f = 5;
    while (f <= temp)
    {
        count += temp/f;
        f = f*5;
    }
    return (count >= n);
}

// Return smallest number whose factorial
// contains at least n trailing zeroes
int findNum(int n)
{
    // If n equal to 1, return 5.
    // since 5! = 120.
    if (n==1)
        return 5;

    // Initalising low and high for binary
    // search.
    int low = 0;
    int high = 5*n;

    // Binary Search.
    while (low <high)
    {
        int mid = (low + high) >> 1;

        // Checking if mid's factorial contains
        // n trailing zeroes.
        if (check(mid, n))
            high = mid;
        else
            low = mid+1;
    }

    return low;
}

// driver code
int main()
{
    int n = 6;
    cout << findNum(n) << endl;
    return 0;
}
Run on IDE
Output:

25
