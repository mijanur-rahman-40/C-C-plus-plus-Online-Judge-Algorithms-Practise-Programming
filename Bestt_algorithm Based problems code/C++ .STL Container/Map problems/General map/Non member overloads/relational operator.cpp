#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> foo,bar;
  foo['a']=1009;
  foo['a']=100;
  bar['b']=10760;
  bar['a']=100;

  // foo ({{a,100},{b,200}}) vs bar ({a,10},{z,1000}}):
  if (foo==bar) cout << "foo and bar are equal\n";
  if (foo!=bar) cout << "foo and bar are not equal\n";
  if (foo< bar) cout << "foo is less than bar\n";
  if (foo> bar) cout << "foo is greater than bar\n";
  if (foo<=bar) cout << "foo is less than or equal to bar\n";
  if (foo>=bar) cout << "foo is greater than or equal to bar\n";

  return 0;
}


