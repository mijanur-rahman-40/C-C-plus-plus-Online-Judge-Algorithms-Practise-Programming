#include<bits/stdc++.h>
using namespace std;
int main()
{
  int tst;
  scanf("%d",&tst);
  while(tst--){
    string str;
    cin>>str;
    if(str == "Quill") cout<<"I am going to ask you this one time, where is Gamora?"<<endl;
    else if(str == "Stark") cout<<"I will do you one better, who is Gamora?"<<endl;
    else if(str == "Drax") cout<<"I will do you one better, why is Gamora?"<<endl;
    else cout<<"What is Gamora?"<<endl;
  }
  return 0;

}
