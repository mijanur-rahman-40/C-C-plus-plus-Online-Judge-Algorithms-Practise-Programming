#include<stdio.h>
#include<ctype.h>
#include<math.h>
int STK[100], top = -1;

using namespace std;

void push(int p)
{
    top++;
    STK[top] = p;
}
int pop()
{
    int p = STK[top];
    top--;
    return p;
}
int main()
{
    int i;
    char postfix[100];
    gets(postfix);
    for(i = 0; postfix[i] != '\0'; ++i)
    {
        if(isdigit(postfix[i]))
        {
            push(postfix[i]-'0');
        }
        else
        {
            int a = pop();
            int b = pop();
            int r;
            switch(postfix[i])
            {
            case '+' :
                r=b+a;
                break;
            case '-' :
                r=b-a;
                break;
            case '*' :
                r=b*a;
                break;
            case '/' :
                r=b/a;
                break;
            case '%' :
                r=b%a;
                break;
            case '^' :
                r=pow(b,a);
                break;
            }
            push(r);
        }
    }
    printf("\nResult = %d",pop());
    return 0;
}
