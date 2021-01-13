#include<stdio.h>
#include <string.h>
int main()
{
    int tst;
    scanf("%d",&tst);
    while(tst--){

    int i,st,j;
    scanf("%d",&st);
     char str[st][50], temp[50];
    for(i=0; i<st; ++i)//[^\n]
        scanf("%s",str[i]);
    for(i=0; i<st-1; ++i)
        for(j=i+1; j<st ; ++j)
        {
            if(strcmp(str[i], str[j])>0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }

    printf("\nIn lexicographical order: \n");
    for(i=0; i<st; ++i)
    {
       printf(str[i]);
       printf("\n");
    }
    }

    return 0;
}
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,j,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
         char str[n][50], temp[50];
        scanf("%s",str);
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(strcmp(str[i],str[j])>0){
                    strcpy(temp,str[i]);
                    strcpy(str[i],str[j]);
                    strcpy(str[j],temp);
                }

            }
        }
         for(i=0;i<n;i++){
printf(str[i]);
         }
    }
    return 0;
}

