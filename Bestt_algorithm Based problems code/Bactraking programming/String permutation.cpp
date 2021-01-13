// C program to print all permutations with duplicates allowed
/*
#include <stdio.h>
#include <string.h>

 Function to swap values at two pointers
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

 Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string.
void permute(char *a, int l, int r)
{
   int i;
   if (l == r)
     printf("%s\n", a);
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r);
          swap((a+l), (a+i)); //backtrack
       }
   }
}

Driver program to test above functions *
int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    permute(str, 0, n-1);
    return 0;
}


*/


/*
#include<bits/stdc++.h>
using namespace std;
void permutate( char str[], int index )
{
    int i = 0;
    int  lastChar = 0;
    if( index == strlen(str) )
    { // We have a permutation so print it
        printf("%s\n",str);
        return;
    }
    // Permutate once without any swaps.
   permutate( str, index + 1 );
    lastChar = str[index];
    for( i = index + 1; i < strlen(str); i++ )
    {
        if( lastChar == str[i] ) {
            continue;
        } else {
            lastChar = str[i];
        }
        swap( str[index], str[i] ); // It doesn't matter how you swap.
        permutate( str, index + 1 );
        swap( str[index], str[i] );
    }
}
int main()
{
    char str[100];
    scanf("%s",str);
    permutate(str,0);
}


*/



#include<bits/stdc++.h>
using namespace std;
void permutate( char str[], int index )
{
    int i = 0;
    char  lastChar;
    if( index == strlen(str) )
    { // We have a permutation so print it
        printf("%s\n",str);
        return;
    }
    // Permutate once without any swaps.
    permutate( str, index + 1 );
    lastChar = str[index];
    cout<<"Index : "<<index<<" "<<"lastChar : "<<lastChar<<endl;
    for( i = index + 1; i < strlen(str); i++ )
    {
        if( lastChar == str[i] ) {
            continue;
        } else {
            lastChar = str[i];
        }
        swap( str[index], str[i] ); // It doesn't matter how you swap.
        permutate( str, index + 1 );
        swap( str[index], str[i] );
    }
}
int main()
{
    char str[100];
    scanf("%s",str);
    permutate(str,0);
}


/*
abc
Index : 2 Index : 1 acb
Index : 2 Index : 0 bac
Index : 2 Index : 1 bca
Index : 2 cba
Index : 2 Index : 1 cab
Index : 2
*/
