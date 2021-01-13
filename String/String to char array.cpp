#include<bits/stdc++.h>
using namespace std;
int main(){
  string w;
  char s[9][9];
  int p=0;
  getline(cin, w);
   while(p != w.size())
{
  for (int k = 0; k < 5; k++)
  {
    for(int j = 0; j < 5; j++)
    {
      s[k][j] = w[p];
      p++;
    }
  }
}
  cout << "nums are: " << endl;
  for(int k = 0; k < 5; k++)
  {
    for(int j = 0; j <5; j++)
    {
      cout << s[k][j];
    }
    cout<<endl;
  }
  return 0;
}



/*
11000
01100
00101
10001
01011

1100001100001011000101011
*/
