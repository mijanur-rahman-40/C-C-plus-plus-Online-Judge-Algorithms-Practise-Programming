#include <iostream.h>
#include <conio.h>
void octobin(int);

void main()
{
    clrscr();
    int a;
    cout << "Enter a 2-digit octal number : ";
    cin>>a;
    octobin(a);
    getch();
}
void octobin(int oct)
{
    long bnum=0;
    int A[6];
    //Each octal digit is converted into 3 bits, 2 octal digits = 6 bits.
    int a1,a2,quo,rem;
    a2=oct/10;
    a1=oct-a2*10;
    for(int x=0;x<6;x++)
    {
        A[x]=0;
    }
    //Storing the remainders of the one's octal digit in the array.
    for (x=0;x<3;x++)
    {
        quo=a1/2;
        rem=a1%2;
        A[x]=rem;
        a1=quo;
    }
    //Storing the remainders of the ten's octal digit in the array.
    for(x=3;x<6;x++)
    {
        quo=a2/2;
        rem=a2%2;
        A[x]=rem;
        a2=quo;
    }
    //Obtaining the binary number from the remainders.
    for(x=x-1;x>=0;x--)
    {
        bnum*=10;
        bnum+=A[x];
    }
    cout << "The binary number for the octal number " << oct << " is " << bnum << "." << endl;
}
