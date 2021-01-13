
#include<bits/stdc++.h>
using namespace std;
char str[100];
int main ()
{
    int Tst;
    scanf("%d",&Tst);
    while (Tst--)
    {
        scanf("%s",str);
        int i;
        int sum=0;
        double ans=0,n=0;
        for(i=0;i<strlen(str);i++)
        {
            if(isupper(str[i]))
            {
                char ch;
                ch=str[i];
                switch (ch)
                {
                    case 'C':
                        n=12.01;break;
                    case 'H':
                        n=1.008;break;
                    case 'O':
                        n=16.00;break;
                    case 'N':
                        n=14.01;break;
                }
                sum=0;
            }
            while(isdigit(str[i]))
            {
                sum=sum*10+str[i]-'0';
                if(!isdigit(str[i+1]))
                {
                    break;
                }
                else
                i++;
            }
            if(sum!=0)
            ans+=sum*n;
            else if(isupper(str[i+1])||i==strlen(str)-1)          //else if(isupper(s[i+2])||i==strlen(s)-1)
            ans+=n;
        }
        printf("%.3f\n",ans);
    }
    return 0;
}



#include<stdio.h>
int main()
{
    char temp,a[85];
    int ltr[100],t,n,i,val,x;
        scanf("%d",&t);
        while(t--)
        {
            scanf("%s",a);
            temp=a[0],val=ltr['C']=ltr['H']=ltr['O']=ltr['N']=0;
            for(i=1;a[i];i++)
            {
                if(a[i]>='1'&&a[i]<='9')
                    val=val*10+a[i]-'0';
                else
                {
                    if(val==0)  val=1;
                    ltr[temp]+=val;
                    temp=a[i];
                    val=0;
                }
            }
            if(val==0) val=1;
            ltr[temp]+=val;
            printf("%.3lf\n",ltr['C']*12.01+ltr['H']*1.008+ltr['O']*16.0+ltr['N']*14.01);
        }
        return 0;
}
