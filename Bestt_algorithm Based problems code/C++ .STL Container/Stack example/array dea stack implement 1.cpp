#include<stdio.h>
#define sz 100

int arr[sz],top=0;

void push(int val)
{
    if(top>=sz)
        printf("No more space on Stack.\n");
    else
        arr[top++]=val;
}

void pop()
{
    if(top<=0)
    {
        printf("Stack is empty\n");
    }
    else
    {
        top--;
        printf("Popped element: %d\n",arr[top]);
    }
}

void printlist()
{
    int i;
    for(i=0;i<top;i++)
        printf("%d ",arr[i]);
    puts("");
}

int main()
{
    int num,val;
	bool getout=false;

	while(true)
	{
	    printf("Enter your choice:\n");
	    printf("1. Push\n2. Pop\n3. Exit\n");
	    scanf("%d",&num);

		switch(num)
		{
            case 1:
                scanf("%d",&val);

                push(val);

                printlist();
                puts("");
                break;
            case 2:
                pop();

                printlist();
                puts("");
                break;
            case 3:
                getout=true;
                break;
		}

        if(getout==true)
            break;
	}

	return 0;
}

