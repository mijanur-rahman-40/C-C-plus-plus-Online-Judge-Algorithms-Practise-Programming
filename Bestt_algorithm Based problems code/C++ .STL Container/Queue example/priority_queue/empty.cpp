#include <iostream>
#include <queue>
using namespace std;
int main()
{
  priority_queue<int> mypq;
  string str;
  cout<<"index elements"<<" ";
  for (int i=5;i>0;i--){
        cin>>str;
    mypq.push(str);
   cout<<str<<" ";
  }
  cout<<endl;
  cout<<endl;
  cout<<"sort up to low"<<" ";
  for (int i=1;i<=5;i++){
        cout<<mypq.top()<<" ";
     mypq.pop();
  }

  cout<<"index elements"<<" ";
  for (int i=5;i>0;i--){
    mypq.push(i);
   cout<<i<<" ";
  }
  cout<<endl;
  cout<<endl;
  cout<<"sort up to low"<<" ";
  for (int i=1;i<=5;i++){
        cout<<mypq.top()<<" ";
     mypq.pop();
  }
  cout<<endl<<endl;
  int sum (0);
  for (int i=5;i>0;i--){
    mypq.push(i);
  }
   while (!mypq.empty())
  {
     sum += mypq.top();
     cout<<' '<<sum<<" ";
     mypq.pop();
  }
  cout<<endl;
  cout << "total: " << sum << '\n';
  cout<<endl;
  int sum1 (0);
  for (int i=1;i<=5;i++){
    mypq.push(i);
  }
  cout<<endl;
  while (!mypq.empty())
  {
     sum1 += mypq.top();
    cout <<" "<<sum1<<" ";
     mypq.pop();
  }
  cout<<endl;
  cout << "total: " << sum1 << '\n';
  return 0;
}
