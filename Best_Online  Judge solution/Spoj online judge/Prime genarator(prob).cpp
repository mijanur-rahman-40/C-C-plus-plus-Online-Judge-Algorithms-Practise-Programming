#include <iostream>
#include <cmath>

using namespace std;
unsigned int numbers[3500],len;
inline bool prime(unsigned int x)
{
    unsigned int i,last = sqrt(x);
    for(i=2;i<last;i++)
    {
        if(!(x%i))
        {
            return 0;
        }
    }
    return 1;
}
void generate()
{
    for(unsigned int i=2;i<32000;i++)
    {
        if(prime(i))
        {
            numbers[len++] = i;
        }
    }
}
inline bool process(unsigned int x)
{
    unsigned int i,last = sqrt(x);
    for(i=0;i<last && numbers[i]<=last;i++)
    {
        if(!(x%numbers[i]))
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    unsigned int a,b;
    cin>>t;
    generate();
    while(t--)
    {
        cin>>a>>b;
        if(a==1)
        {
            a++;
        }
        while(a<=b)
        {
            if(prime(a))
            {
                cout<<a;

            a++;
        }
        cout<<endl;
    }
}
}
