#include<stdio.h>
03
#include<conio.h>
04
void main()
05
{
06
     int ar[100],i,n,j,counter;
07

08
     printf("Enter the size of the array ");
09
     scanf("%d",&n);
10
     printf("\n Now enter the elements of the array");
11
     for(i=0;i<n;i++)
12
     {
13
           scanf("%d",&ar[i]);
14
     }
15

16
     printf(" Array is -");
17
     for(i=0;i<n;i++)
18
     {
19
           printf("\t %d",ar[i]);
20
     }
21

22
     printf("\n All the prime numbers in the array are -");
23
     for(i=0;i<n;i++)
24
     {
25
           counter=0;
26
           for(j=2;j<ar[i];j++)
27
           {
28
                 if(ar[i]%j==0)
29
                 {
30
                       counter=1;
31
                       break;
32
                 }
33
           }
34
           if(counter==0)
35
           {
36
                 printf("\t %d",ar[i]);
37
           }
38
     }
39
     getch();
40
}

