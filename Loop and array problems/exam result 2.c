#include<stdio.h>
int main()
{
    int i;
    int total_marks[]={86,78,94,68,92,78,64,62,72,61};
    int marks_count[101];
    for(i=0;i<101;i++){
        marks_count[i]=0;
    }
    for(i=0;i<10;i++){
        marks_count[total_marks[i]]++;
    }
    for(i=50;i<=100;i++){
        printf("Marks: %d Count: %d\n",i,marks_count[i]);
    }
    return 0;
}
