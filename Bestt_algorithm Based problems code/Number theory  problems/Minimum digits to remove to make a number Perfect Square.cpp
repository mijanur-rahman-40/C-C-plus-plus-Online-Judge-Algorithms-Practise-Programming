
/*
8
3
83
1
81
31
831
4
84
34
834
14
814
314
8314
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   cin>>str;
   int max = -1,number;
    int len = str.size();
    for(int i=1; i<(1<<len); i++){
        string str1 = "";
        for(int j=0; j<len; j++){
            if( (i>>j) & 1){
                str1 += str[j];
            }
        }
      if(str1[0] != '0'){
        int temp = atoi(str1.c_str());
        /*or
            int temp = 0;
            for (int j = 0; j < str.size(); j++)
                temp = temp * 10 + (int)(str[j] - '0');
                */
        int root = sqrt(temp);
        if( root * root == temp){
            if(max<(int)str1.size())
            {
                max = str1.size();
                number = temp;
            }
         }
       }
    }
    if(max ==-1){
        cout<<"There is no solution"<<endl;
    }
    else
        cout<<"Maximum Perfect square is : "<<number<<endl;
}
