/*
#include<bits/stdc++.h>
using namespace std;
int stk[100],top=-1;
void push(int p)
{
    top++;
    stk[top]=p;
}
int pop()
{
    int p=stk[top];
    top--;
    return p;
}
int main()
{
    int i;
    char postFix[100];
    gets(postFix);
    for(i=0;postFix[i]!='\0';i++)
    {
        if(isdigit(postFix[i]))
        {
            push(postFix[i]-'0');
        }
        else
        {
            int a=pop();
            int b=pop();
            int result;
            switch(postFix[i])
            {
             case '+':
                result=a+b;
                break;
                  case '-':
                result=a-b;
                 break;
                   case '*':
                result=a*b;
                 break;
                    case '/':
                result=a/b;
                 break;
                case '^':
                result=pow(a,b);
                 break;
                default:
                result=0;
            }
                push(result);
            }
    }
    printf("Result: %d",pop());
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{

    char postFix[100];
      gets(postFix);
     stack<int>p;
    for(int i=0;postFix[i]!='\0';i++)
    {
        if(isdigit(postFix[i]))
        {
            p.push(postFix[i]-'0');
        }
        else
        {
            int a=p.top();
            p.pop();
            int b=p.top();
            p.pop();
            int result;
            switch(postFix[i])
            {
             case  '+':
                result=a+b;
                break;
                  case  '-':
                result=a-b;
                 break;
                   case  '*':
                result=a*b;
                 break;
                    case  '/':
                result=a/b;
                 break;
                case  '^':
                result=pow(a,b);
                 break;
                default:
                result=0;
            }
               p.push(result);
            }
    }
    printf("Result: %d",p.top());
    return 0;
}
//(4*3-(2/1+6))/(2+4)
