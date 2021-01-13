#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *marks;
    int i,n;
    printf("Please enter the number students: ");
    scanf("%d",&n);
    marks=malloc(sizeof(int));
    printf("Enter the marks for each student : \n");
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
     printf("Now here you can see the values:\n");
     for(i=0;i<n;i++){
        printf("%d\n",marks[i]);
     }
     return 0;
}

