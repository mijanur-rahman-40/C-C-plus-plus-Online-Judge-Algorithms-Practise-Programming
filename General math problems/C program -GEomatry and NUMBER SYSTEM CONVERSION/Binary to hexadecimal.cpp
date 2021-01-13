#include<iostream>
#include <iomanip>
#include<math.h>
#include<string>
using namespace std;
int main()
{
long int longint=0;
string buf;
cin>>buf;
int len=buf.size();
for(int i=0;i<len;i++)
{
longint+=( buf[len-i-1]-48) * pow(2,i);


}
cout<<setbase(16);
cout<<longint;



return 0;
}
