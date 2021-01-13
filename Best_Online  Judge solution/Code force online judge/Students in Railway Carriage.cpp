// aei code a problem ase
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int siz,n,m;
    scanf("%d%d%d",&siz,&n,&m);
    cin>>str;
    int sum = n+m;
    string str1 = "@";
    str = str+str1;
   // cout<<str;
    int flag,temp1 = 0,temp2 = 0;
    int coun = 0,sum_A = 0,sum_B = 0;
    for(int i=0; i<str.size(); i++){
        if(str[i] == '.'){
            coun++; flag = 0;
            continue;
        }
    else{
           // if(n<m) swap(n,m);
       if(coun%2 == 0){
        sum_A += min(n,coun/2);
        sum_B += min(m,coun/2);
        }
      else{
        if(n>=m){
        sum_A += min(n,coun/2+1);
        sum_B += min(m,coun/2);
        }
        else{
           // cout<<"n   m   "<<n<<m<<endl;
            sum_A += min(n,coun/2);
            sum_B += min(m,coun/2+1);
        }
        if(str[i] == '*' || str[i] == '@'){
                if(flag == 0 ){
                if(n>sum_A && sum_A != temp1){
                 n -= sum_A;
                temp1 = sum_A;
                }
                else
                    n = max(0,n);
                 if(m>sum_B && sum_B != temp2){
                 m -= sum_B;
                 temp2 = sum_B;
                 }
                else
                    m = max(0,m);
                }
            }
         }
         flag = 1;
      }
     if(sum<=sum_A+sum_B) break;
      coun = 0;
    // cout<<"sum_A: "<<sum_A<<endl;
    // cout<<"sum_B: "<<sum_B<<endl;

    }
   cout<<sum_A+sum_B<<endl;
   return 0;
}


/*
9 2 4
*...*...*
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,n,m;
    cin>>len>>n>>m;
    string str;
    cin>>str;
    int sum=n+m;
    int coun = 0,x,y;
    for(int i=0; i<str.size(); i++){
        if(str[i] == '*'){
            x = (coun+1)/2,y = coun/2;
            if(n<m) swap(n,m);
            n -= x;
            m -= y;
            n = max(n,0); m = max(m,0);
            coun = 0;
        }
        else
            coun++;
    }
          x = (coun+1)/2,y = coun/2;
           if(n<m) swap(n,m);
            n -= x;
            m -= y;
            n = max(n,0); m = max(m,0);

    cout<<sum-n-m<<endl;
}
