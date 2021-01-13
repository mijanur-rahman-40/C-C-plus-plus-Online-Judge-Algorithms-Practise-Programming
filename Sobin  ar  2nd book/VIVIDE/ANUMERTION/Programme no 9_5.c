#include<stdio.h>
enum color{red,green,blue};
int main()
{
    enum color selected_color;
    int num;
    printf("Enter 1 for red ,2 for green ,3 for blue: ");
    scanf("%d",&num);
    if(num==1)
        selected_color=red;
    if(num==2)
        selected_color=green;
        if(num==1)
        selected_color=blue;
        printf("selected color: %d\n",selected_color);
        return 0;
}
