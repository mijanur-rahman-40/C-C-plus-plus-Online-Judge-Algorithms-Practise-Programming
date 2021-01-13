#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *marks,i,n;
    printf("Please enter the number of students: ");
    scanf("%d",&n);
    marks=malloc(sizeof(int ));
    if(marks==NULL){
        printf("Memory allocation fails for marks\n ");
        return 1;
    }
    printf("Enter the marks for every student:  \n");
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    printf("Now here you can see the values :\n");
    for(i=0;i<n;i++){
        printf("%d\n",marks[i]);
    }
    //free(marks);
    return 0;
}
