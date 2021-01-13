/*
nesar ta best
Working with large numbers in C/C++ is always a problem. Those who have knowledge in Java/python tend to code in these languages for those particular problems. (Java has a BigInteger class where in there is no limit for integer range you work on. Python doesn’t have any limits on integers.) For those who wanted to handle large numbers in C/C++, lets discuss an approach for how to multiply large numbers.

We use arrays to store the numbers.
Why? Because we do not have any data type which could store big integers say around 10^3 digits.
How? Each digit of integer is stored in each index in the array. Lets store them in reverse order for simpler calculations.

Now we have two integers(A,B) in array each of length L1,L2 respectively. Product of these two numbers will be at most L1+L2. So lets take an empty Ans[] array of size 2*N.

Procedure :

Step 1 : Multiply index i of B with all the indexes j of A. Add the product to value in Ans[k] where 0 <= i < L2, 0 <= j < L1, k = i+j.
Step 2 : Repeat step 1 till i = L2. (Picture how you multiply two large numbers on a paper).
Step 3 :
for each i in range(0,L1+L2)
TMP = X/10. X = X%10. Y = Y+TMP.
X = A[i]
Y = A[i+1]
TMP = temporary variable.
Step 4 : reverse the array Ans, and that will be the final product.

Code:

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b[100];
    int ans[200]={0};
    int i,j,tmp;
    char s1[101],s2[101];
    scanf(" %s",s1);
    scanf(" %s",s2);
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    for(i = l1-1,j=0;i>=0;i--,j++)
    {
        a[j] = s1[i]-'0';
    }
    for(i = l2-1,j=0;i>=0;i--,j++)
    {
        b[j] = s2[i]-'0';
    }
    for(i = 0;i < l2;i++)
    {
        for(j = 0;j < l1;j++)
        {
            ans[i+j] += b[i]*a[j];
            cout<<ans[i+j]<<endl;
        }
    }
    for(i = 0;i < l1+l2;i++)
    {
        tmp = ans[i]/10;
        ans[i] = ans[i]%10;
        ans[i+1] = ans[i+1] + tmp;
    }
    for(i = l1+l2; i>= 0;i--)
    {
        if(ans[i] > 0)
            break;
    }
    printf("Product : ");
    for(;i >= 0;i--)
    {
        printf("%d",ans[i]);
    }
    return 0;
}
/*
Input :
150353265326
22055653351

Output:
Product : 3316139500221184007426
// C++ program to multiply two numbers represented
// as strings.


#include<bits/stdc++.h>
using namespace std;

// Multiplies str1 and str2, and prints result.
string multiply(string num1, string num2)
{
    int n1 = num1.size();
    int n2 = num2.size();
    if (n1 == 0 || n2 == 0)
       return "0";

    // will keep the result number in vector
    // in reverse order
    vector<int> result(n1 + n2, 0);

    // Below two indexes are used to find positions
    // in result.
    int i_n1 = 0;
    int i_n2 = 0;

    // Go from right to left in num1
    for (int i=n1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';

        // To shift position to left after every
        // multiplication of a digit in num2
        i_n2 = 0;

        // Go from right to left in num2
        for (int j=n2-1; j>=0; j--)
        {
            // Take current digit of second number
            int n2 = num2[j] - '0';

            // Multiply with current digit of first number
            // and add result to previously stored result
            // at current position.
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;

            // Carry for next iteration
            carry = sum/10;

            // Store result
            result[i_n1 + i_n2] = sum % 10;

            i_n2++;
        }

        // store carry in next cell
        if (carry > 0)
            result[i_n1 + i_n2] += carry;

        // To shift position to left after every
        // multiplication of a digit in num1.
        i_n1++;
    }

    // ignore '0's from the right
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
       i--;

    // If all were '0's - means either both or
    // one of num1 or num2 were '0'
    if (i == -1)
       return "0";

    // generate the result string
    string s = "";
    while (i >= 0)
        s += std::to_string(result[i--]);

    return s;
}

// Driver code
int main()
{
    string str1 = "1235421415454545454545454544";
    string str2 = "1714546546546545454544548544544545";
    cout << multiply(str1, str2);
    return 0;
}
*/
