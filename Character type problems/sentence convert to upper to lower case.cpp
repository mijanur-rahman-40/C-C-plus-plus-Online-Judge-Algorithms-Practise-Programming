#include<iostream>
using namespace std;
int  main()
{
    string name;
    int i,l;
    cout<<"read any string"<<endl;
    cin>>name;
    l=name.length();
    for(int i=0; i<l; i++){
        if(isupper(name[i]))
        {
            cout<<char(tolower(name[i]));
        }
        else if(islower(name[i]))
        {
            cout<<char(toupper(name[i]));
        }
        else
        {
            cout<<name[i];
        }
    }
    return 0;

}
