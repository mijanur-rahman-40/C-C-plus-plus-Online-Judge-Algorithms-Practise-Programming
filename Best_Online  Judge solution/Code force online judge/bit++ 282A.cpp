#include<iostream>
using namespace std;
int main()
{
    string st1;
    int num,x=0;
    cin>>num;
    while(num--){
        cin>>st1;
        if(st1=="++X" || st1=="X++"){
                x++;
        }
        else if(st1=="X--" || st1=="--X"){
            x--;
        }
    }
        cout<<x<<endl;

    return 0;
}
