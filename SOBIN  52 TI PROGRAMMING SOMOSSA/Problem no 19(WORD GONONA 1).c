#include<stdio.h>
int main()
{
    char str[1000];
    int t,i,count,len;
    scanf("%d",&t);
    while(t--){
        scanf(" %[^\n]",str);
        count=0;
        for(i=0;str[i]!='\0';i++){
            if(str[i]==' '){
                count++;
            }
        }
        printf("%d\n",count+1);
    }
    return 0;
}
