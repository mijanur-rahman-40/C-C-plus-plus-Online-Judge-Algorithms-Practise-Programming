
/*
#include<bits/stdc++.h>
using namespace std;
bool is_pal(int num)
{
    string str,str1;
     str=to_string(num);
      str1=str;
    reverse(str.begin(),str.end());
    if(str1==str && str.size()%2==0)
    {
        return  true;
    }
    else
    {
        return false;
    }
}

int main()
{
  int pos,k=0;
  cin>>pos;
  for(int i=11; ; i++)
  {
      if(is_pal(i))
      {
          k++;
      }
      if(k==pos)
      {
          cout<<i<<endl;
          break;
      }
  }
  return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str; cin>>str;
    cout<<str;
    reverse(str.begin(),str.end());
    cout<<str<<endl;
}
