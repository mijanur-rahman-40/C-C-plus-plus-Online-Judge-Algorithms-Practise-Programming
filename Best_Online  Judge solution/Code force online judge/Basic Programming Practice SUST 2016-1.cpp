/*
//J
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;cin>>num;
    map<char,int>mp;
     map<char,int>::iterator it;
    string str;
    cin>>str;
    for(int i=0; i<str.size(); i++)
    {
        if(islower(str[i])){
            str[i]=toupper(str[i]);
            mp[str[i]]++;
        }
        else
        mp[str[i]]++;
    }
    int coun=0;
    for(it=mp.begin();it!=mp.end();it++)
    {
        coun++;
    }
    if(coun==26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
*/
/*
//C
#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,k;
      cin>>n>>k;
      pair<int,int>pai[n];
      for(int i=1; i<=n; i++){
            int a;cin>>a;
      pai[i].first=a;
      pai[i].second=i;
      }
      sort(pai+1,pai+n+1); int sum=0,coun=0;
      for(int i=1;i<=n;i++){
            sum+=pai[i].first;
        if(sum<=k){
            coun++;
        }
        else
            break;
      }
      if(coun==0){
          cout<<0<<endl;
      }
      else{
            cout<<coun<<endl;
      for(int i=1; i<=coun; i++){
          cout<<pai[i].second<<" ";
      }
      }
      cout<<endl;
return 0;
}
*/
/*
//A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;cin>>a>>b>>c>>d;
    int v,m;
    m=max((3*a/10),a-a/250*c);
    v=max((3*b/10),b-b/250*d);
    if(v>m){
        cout<<"Vasya"<<endl;
    }
    else if(v<m)
    {
        cout<<"Misha"<<endl;
    }
    else
        cout<<"Tie"<<endl;
return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,colum;
    cin>>row>>colum; string str=" ",str1=" ";
    int flag=0,flag1=0;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=colum;j++){
            if(i%2==1 ){
                cout<<"#";
            }
            else{
                if(j==1 && flag1==1){
                    reverse(str.begin(),str.end());
                    cout<<str;
                    j=colum;
                }
                else{
                if(j==colum){
                    cout<<"#"; flag1=1;
                    char ch; ch='#'; str1[0]=ch;
                    str+=str1;
                }
                else{
                    cout<<".";
                     char ch; ch='.'; str1[0]=ch;
                    str+=str1;
                }
                }
             }
          }
        cout<<endl;
    }
//cout<<str;
    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
   while(cin>>str1>>str2){
        int len =str1.size();
        for (int i = len-1; i >= 0; --i){
            if (str1[i] != 'z'){
                str1[i]=str1[i]+1;
                break;
            }
            else
               str1[i] = 'a';
        }
        //cout<<str1<<str2;
        if (str1!=str2)
        {
             cout<<str1<<endl;
        }
        else
          cout<<"No such string"<<endl;
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
bool check_PL(string s)
{
    string str;
    str=s;
   reverse(s.begin(),s.end());
   if(str==s)
   {
       return true;
   }
   else
    return false;
     }
int main()
{
    string s;
    cin>>s ;
     for(char c='a';c<='z';c++){
        for(int i=0;i<=s.size();i++){
            string a = s;
            string b=" ";
            b[0]=c;
            a.insert(i,b);
            if (check_PL(a)){
                cout<<a<<endl;
                //cout<<b<<endl;
                return 0;
            }
     }
   }
    cout<<"NA"<<endl;
    return 0;
}

{1,1,1,1,1},
{1,2,3,4,5},
{1,3,6,10,15},
{1,4,10,20,35},
{1,5,15,35,70}.

*/

#include<bits/stdc++.h>
using namespace std;
int arr[11][11];
int main()
{
    int num; cin>>num;
    for(int i=1;i<=num;i++){
            arr[1][i]=1;
    }
    int sum=1;
    for(int i=2;i<=num;i++){
            for(int j=1; j<=num;j++)
            {
              arr[i][j]=arr[i-1][j]+arr[i][j-1];
              //cout<<arr[i][j];
            }
    }
  cout<<arr[num][num]<<endl;
  return 0;
}
