// vector::begin/end
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int>v;
  vector<int>::iterator it;
  for(int i=1;i<=5;i++)
    v.push_back(i);
  cout<<"myvector contains:";
  //for(vector<int>::iterator it=v.begin();it!= v.end(); ++it)
  for( it=v.begin();it!= v.end(); ++it){
//  for(int i=0;i<v.size();i++){
    //cout<<v[i]<<" ";
    cout<<' '<< *it;
}
  cout<<endl;

  return 0;
}
