#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> g1;
    vector <int> :: iterator i;
    vector <int> :: reverse_iterator ir;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    cout<<"Output of begin and end:";
    for(i=g1.begin();i!=g1.end();++i)
        cout<<' '<<*i<<' ';

    cout<<endl<<endl;
    cout<<"Output of rbegin and rend:";
    for(ir= g1.rbegin();ir != g1.rend(); ++ir)
        cout<<' '<<*ir<<' ';

    return 0;

}
