// inserting into a vector
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int>v(3,100);
  vector<int>::iterator it;

     it=v.begin();
      it=v.insert(it,200);

        v.insert(it,2,300);

  // "it" no longer valid, get a new one:
       it=v.begin();

             vector<int>av(2,400);
          v.insert (it+2,av.begin(),av.end());

       int  array []={501,502,503};
          v.insert(v.begin(),array,array+3);

          cout << "myvector contains:";
               for (it=v.begin();it<v.end();it++)
      cout << ' ' << *it;
      cout<<endl;

  return 0;
}
