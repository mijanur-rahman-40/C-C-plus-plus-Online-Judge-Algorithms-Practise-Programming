

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tst,mod,arr[100];
    scanf("%d",&tst);
    while(tst--){
        int num;
        for(int i=0; i<10; i++) {
          arr[i]=0;
        }
        scanf("%d",&num);
        for(int i=1;i<=num;i++){
           int j=i;
            while(j!=0){
                mod=j%10;
                arr[mod]++;
                j/=10;
            }
        }
        for(int i=0;i<9;i++){
          printf("%d ",arr[i]);
        }
        printf("%d\n",arr[9]);
    }
    return 0;
}
/*

#include<bits/stdc++.h>
using namespace std;
int mod;
string str,str1;char st;
string re_string(int num){
     str.clear();
 while(num!=0){
               mod=num%10;
               st=mod+'0';
               str+=st;
               num=num/10;
          }
          return str;
}
int main()
{
     int tst;
     cin>>tst;
     while(tst--){
          int num,n0=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;
          cin>>num;string str3="";
        for(int j=1;j<=num;j++){
               str1=re_string(j);
               str3+=str1;
        }
          for(int i=0;i<str3.size();i++){
               if(str3[i]=='0')     {n0++;  }
               else if(str3[i]=='1'){n1++;  }
               else if(str3[i]=='2'){n2++;  }
               else if(str3[i]=='3'){n3++;  }
               else if(str3[i]=='4'){n4++;  }
               else if(str3[i]=='5'){n5++;  }
               else if(str3[i]=='6'){n6++;  }
               else if(str3[i]=='7'){n7++;  }
               else if(str3[i]=='8'){n8++;  }
               else if(str3[i]=='9'){n9++;  }
          }
               str1.clear();
               str.clear();str3.clear();

printf("%d %d %d %d %d %d %d %d %d %d\n",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9);
          n0=0;n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;
     }
return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    scanf("%d",&tst);
    while(tst--)
    {
        map<char,int>mp;
        map<char,int>::iterator it;
        int num;
        scanf("%d",&num);
        for(int i=1;i<=num;i++)
        {
            int temp=i;
            while(temp>0)
            {
            mp[temp%10+'0']++;
            temp=temp/10;
            }
        }
       // for(it=mp.begin();it!=mp.end();it++){
          //printf("%d ",it->second);

        printf("%d %d %d %d %d %d %d %d %d %d\n",mp['0'],mp['1'],mp['2'],
           mp['3'],mp['4'],mp['5'],mp['6'],mp['7'],mp['8'],mp['9']);
    }
    return 0;
}
*/
