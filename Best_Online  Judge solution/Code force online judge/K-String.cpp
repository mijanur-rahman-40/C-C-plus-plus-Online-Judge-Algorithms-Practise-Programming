#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   int n,arr[27]={0};
   cin>>n>>s;
   for(int i=0;i<s.size();i++)
   {
       arr[s[i]-'a']++;
       printf("%d\n",arr[s[i]-'a']);
   }
   for(int i=0;i<26;i++)
   {
        printf("%d\n",arr[i]);
       if(arr[i]%n!=0)
          {
               cout<<-1;
       return 0;
       }
   }
   for(int i=0;i<n;i++){
       for(int i=0;i<26;i++){
       for(int j=0;j<arr[i]/n;j++){
       cout<<(char)(i+'a');
   }
       }
   }
    return 0;
}

/*

#include<bits/stdc++.h>
using namespace std;

map<char, int> m;

int main()
{
    int n;
    string s;
    while(scanf("%d",&n)!=EOF)
    {
        cin>>s;
        int len = s.size();
        for(int i=0; i<len; i++)
            m[s[i]] ++;
       map<char, int>::iterator it;
       int flag = 1;
        for(it=m.begin(); it!=m.end(); it++){
            if(it->second % n){
                flag = 0;
                break;
            }
        }
        if(!flag)  printf("-1\n");
        else{
            for(int j=0; j<n; j++){
                for(it=m.begin(); it!=m.end(); it++){
                    for(int i=1; i<=it->second/n; i++)
                        printf("%c", it->first);
                }
            }
            printf("\n");
        }
    }
    return 0;
}

*/
