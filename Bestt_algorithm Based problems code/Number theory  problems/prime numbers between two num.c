#include <stdio.h>
int main()
{
    int tst;
    scanf("%d",&tst);
    while(tst--){
    int low, high, i, flag;
    scanf("%d %d", &low, &high);
    while (low <= high)
    {
        flag = 0;
        for(i = 2; i <= low/2; i++)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d\n", low);

        ++low;
    }
    }
    return 0;
}

/*
#include <stdio.h>

int isPrime(int num);
void printPrimes(int lowerLimit, int upperLimit);
int main()
{
   long  int lowerLimit, upperLimit;

    printf("Enter the lower and upper limit to list primes: ");
    scanf("%ld%ld", &lowerLimit, &upperLimit);
    printPrimes(lowerLimit, upperLimit);

    return 0;
}
void printPrimes(int lowerLimit, int upperLimit)
{
    printf("All prime number between %d to %d are: ", lowerLimit, upperLimit);

    while(lowerLimit <= upperLimit)
    {
        if(isPrime(lowerLimit))
        {
            printf("%d, ", lowerLimit);
        }

        lowerLimit++;
    }
}

int isPrime(int num)
{
    int i;

    for(i=2; i<=num/2; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

*/
