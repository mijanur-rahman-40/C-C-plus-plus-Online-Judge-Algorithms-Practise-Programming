//nesar code runtime error kaih
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
     set<string>st;
     vector<string>str;
     int tst,j=1,i,wcount=0,k;
     scanf("%d",&tst);
     for(k=0;k<tst;k++){
          string st1;
          cin>>st1;
          st.insert(st1);
          str.push_back(st1);
          if(st.size()==j){
          printf("OK\n");
          wcount=0;
          j++;
     }
     else{
     string st2;
     int size=str.size();
     for(int i=k;i>0;i--)
      if(str[k]==str[i-1]){
          wcount++;
          st2=str[k];
          }
      cout<<st2<<wcount<<endl;
     }
     wcount=0;
     }
     return 0;
}

*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num;
      map<string,int>str;
      string st;
     while(scanf("%d",&num)==1){
          for(int i=1;i<=num;i++){
              //getchar();
               cin>>st;
            if (str.count(st)==0){
                printf("OK\n");
                str[st]++;
            }
            else {
                cout <<st<<str[st]<< endl;
                str[st]++;
            }
        }
   }
    return 0;
}
