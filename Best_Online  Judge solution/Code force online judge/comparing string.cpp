/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str1;
   cin>>str1;
   int len=str1.size();
   int a=len;
   for(int i=0;i<a/2;i++){
    swap(str1[i],str1[len-1]);
     len--;
   }
   for(int i=0;i<len+3;i++){
   printf("%c",str1[i]);
   }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int coun=0;
    cin >> a >> b;
    for(int i=0;i<strlen(a);i++){
     if(a[i]!=b[i]){
          coun++;
     }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
	if(a==b && coun==2)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
/*
include<stdio.h>
include<stdlib.h>
include<string.h>
int swap(char*p,char*q)
 { char *temp; temp=p; p=q; q=temp; return 0;
  }
  int main()
   {
        int l1,l2,flag=0,i,j;
        char *p=(char *) malloc(sizeof(char)*100001);
         char *q=(char *) malloc(sizeof(char)*100001);
          scanf("%s%s",p,q);
           l1=strlen(p);
            l2=strlen(q);
             if (l1==l2)
                { for(i=0;i<=l1-1;i++)
                for(j=i+1;j<=l1-1;j++)
                {swap(q+i,q+j);
             if(q==p)
                { flag=1;
             goto a;
              }
             else swap(q+i,q+j);
              }
              }
              a: if(flag==1)
               printf("YES");
               else printf("NO");
return 0;
}
*/
