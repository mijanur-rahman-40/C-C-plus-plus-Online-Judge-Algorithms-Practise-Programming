#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Stack type
struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};

// Stack Operations
struct Stack* createStack( unsigned capacity )
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));

    if (!stack)
        return NULL;

    stack->top = -1;
    stack->capacity = capacity;

    stack->array = (int*) malloc(stack->capacity * sizeof(int));

    if (!stack->array)
        return NULL;
    return stack;
}
int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}
char peek(struct Stack* stack)
{
    return stack->array[stack->top];
}
char pop(struct Stack* stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--] ;
    return '$';
}
void push(struct Stack* stack, char op)
{
    stack->array[++stack->top] = op;
}


// A utility function to check if the given character is operand
int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

// A utility function to return precedence of a given operator
// Higher returned value means higher precedence
int Prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;

    case '^':
        return 3;
    }
    return -1;
}


// The main function that converts given infix expression
// to postfix expression.
int infixToPostfix(char* exp)
{
    int i, k;

    // Create a stack of capacity equal to expression size
    struct Stack* stack = createStack(strlen(exp));
    if(!stack) // See if stack was created successfully
        return -1 ;

    for (i = 0, k = -1; exp[i]; ++i)
    {
        // If the scanned character is an operand, add it to output.
        if (isOperand(exp[i]))
            exp[++k] = exp[i];

        // If the scanned character is an ‘(‘, push it to the stack.
        else if (exp[i] == '(')
            push(stack, exp[i]);

        // If the scanned character is an ‘)’, pop and output from the stack
        // until an ‘(‘ is encountered.
        else if (exp[i] == ')')
        {
            while (!isEmpty(stack) && peek(stack) != '(')
                exp[++k] = pop(stack);
            if (!isEmpty(stack) && peek(stack) != '(')
                return -1; // invalid expression
            else
                pop(stack);
        }
        else // an operator is encountered
        {
            while (!isEmpty(stack) && Prec(exp[i]) <= Prec(peek(stack)))
                exp[++k] = pop(stack);
            push(stack, exp[i]);
        }

    }

    // pop all the operators from the stack
    while (!isEmpty(stack))
        exp[++k] = pop(stack );

    exp[++k] = '\0';
    printf( "%sn", exp );
}

// Driver program to test above functions
int main()
{
    char exp[100];
    gets(exp);
    infixToPostfix(exp);
    return 0;
}

/*

#include<stdio.h>
#include<iostream>
#include<string.h>
#define size 50

using namespace std;

char stack[size];
int tos=0,ele;
void push(int);
char pop();
char infix[30],output[30];
int prec(char);
int main()
{
int i=0,j=0,length;
char temp;
cout<<"\nEnter an infix expression: ";
cin>>infix;
length=strlen(infix);
for(i=0;i<length;i++)
{
    if(infix[i]!='+' && infix[i]!='-' && infix[i]!='*' && infix[i]!='/' && infix[i]!='^' && infix[i]!=')' && infix[i]!='(' )
    {
    output[j++]=infix[i];
    }
    else
    {
        if(tos==0)
        {
        push(infix[i]);
        }
        else
        {
        if(infix[i]!=')' && infix[i]!='(')
        {
            if(    prec(infix[i]) <= prec(stack[tos-1])  )
            {
            temp=pop();
            output[j++]=temp;
            push(infix[i]);
            }
            else
            {
            push(infix[i]);
            }
            }
        else
            {
            if(infix[i]=='(')
            {
            push(infix[i]);
            }
            if(infix[i]==')')
            {
            temp=pop();
            while(temp!='(')
            {output[j++]=temp;
            temp=pop();}
            }
            }
            }
            }
}
while(tos!=0)
    {
    output[j++]=pop();
    }
cout<<"The Postfix expression is: "<<output;

}
void push(int ele)
{
    stack[tos]=ele;
    tos++;
}
char pop()
{
    tos--;
    return(stack[tos]);
}
int prec(char symbol)
{
if(symbol== '(')
return 0;
if(symbol== ')')
return 0;
if(symbol=='+' || symbol=='-')
return 1;
if(symbol=='*' || symbol=='/')
return 2;
if(symbol=='^')
return 3;
return 0;
}
/*

#include <iostream>
#include <string>
#define DEFAULT_SIZE 100

using namespace std;

class Stack{

private:
    char *array;
    int tos, capacity;

public:
    //constructors
    Stack();

    //Destructor
    ~Stack();

    //Methods
    void push(char a);
    char pop();
    char top();
    int get_size();
    bool is_empty();
    bool is_full();
    void display();

};

Stack::Stack(){
    array = new char[DEFAULT_SIZE];
    tos = 0;
    capacity = DEFAULT_SIZE;
}

Stack::~Stack(){
    delete[] array;
}

void Stack::push(char a){
    if(!is_full())
        array[tos++] = a;
}

char Stack::pop(){
        return array[--tos];
}

char Stack::top(){
    return array[tos];
}

int Stack::get_size(){
    return tos;
}

bool Stack::is_empty(){
    if(tos == 0)
        return true;
    else
        return false;
}

bool Stack::is_full(){
    if(tos == capacity)
        return true;
    else
        return false;
}

void Stack::display(){
    if (tos == 0)
        cout<<"The stack is empty"<<endl;
    else{
        for (int i=0; i<tos;i++)
                cout<<array[i]<<" ";
        cout<<endl;
    }
}

int isp(char a){
    if(a == '^'){
        return 3;
    }
    else if (a == '*' or a == '/'){
        return 2;
    }
    else if(a == '+' or a == '-'){
        return 1;
    }
    else if(a == '('){
        return 0;
    }
    else
        return -1;
}

int icp(char a){
    if(a == '^'){
        return 4;
    }
    else if (a == '*' or a == '/'){
        return 2;
    }
    else if(a == '+' or a == '-'){
        return 1;
    }
    else if(a == '('){
        return 4;
    }
}



int main(){
    string infix, postfix;
    Stack stack1;

    cout << "This is a Infix to Postfix Expression converter." << endl;
    cout << "Enter your Infix Expression: ";
    cin >> infix;
    stack1.push('#');

    for(int i=0;i<infix.length();i++){
        if(isdigit(infix[i]) or isalpha(infix[i])){
            postfix += infix[i];
        }
        else if(infix[i] == '+' or infix[i] == '-' or infix[i] == '*' or infix[i] == '/' or infix[i] == '^'){
            while(isp(stack1.top()) >= icp(infix[i])){
                postfix += stack1.pop();
            }
            if(isp(stack1.top()) < icp(infix[i])){
                stack1.push(infix[i]);
            }
        }
    }
    cout << postfix;


    return 0;
}


*/
