#include<stdio.h>
#include<string.h>
int main()
{
    char str1[737],str2[544];
    int i,j,t,str1_len,str2_len;
    scanf("%d",&t);
    while(t--){
        scanf("%s",str1);
        scanf("%s",str2);
        str1_len=strlen(str1);
        str2_len=strlen(str2);//banana ana
        for(i=0;i<(str1_len-str2_len);i++)
            {
            if(str2[0]==str1[i])
            {
                for(j=1;j<str2_len;j++)
                    {
                        if(str2[j]!=str1[i+j])
                        {
                            break;
                        }
                }
                if(j==str2_len)
                    {

                    printf("%d\n",i);
                      break;
                }
             }
          }
        }
    return 0;
    }
