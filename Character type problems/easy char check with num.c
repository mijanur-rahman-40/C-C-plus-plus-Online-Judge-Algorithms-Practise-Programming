/*

#include<stdio.h>
int main()
{
    int x,y;
    char c;
    printf("Please enter the initial position:");
    scanf("%d %d",&x,&y);
    while(1){
        scanf("%c",&c);
        if(c=='S'){
            break;
        }
        else if(c=='U'){
        x--;

    }
    else if(c=='D'){
        x++;
    }
        else if(c=='R'){
            y++;
        }
        else if(c=='L'){
            y--;
        }
    }
    printf("Final position of the robot is: %d ,%d\n",x,y);
    return 0;
}
*/
#include<stdio.h>
int main()
{
    char ch[100];
    gets(ch);
    char a = 'E';
    printf("%c",a- ch[0]);
}
