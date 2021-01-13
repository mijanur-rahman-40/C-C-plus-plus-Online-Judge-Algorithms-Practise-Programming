/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num;
    string str="",sum="";
          cin>>num;
          //for(int i=1;i<=num;i++){
               stringstream ss;
               ss<<num;
               str=ss.str();
               sum+=str;
          //}
          cout<<sum<<endl;

}
*/
//num to string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    string str;
    str=to_string(num);
    cout<<str;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
     //char str1[]="177";
     //gets(str);
     string str,str1="";
     cin>>str;
     for(int i=0;i<str.size();i++){
          int num;
//          str1=str[i];
       str1=str[i];
          num=atoi(str1.c_str());
          cout<<num<<endl;
     }
     return 0;
}
*/
