#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];

    scanf("%s",str1);
    scanf("%s",str2);
    if(strlen(str1)==strlen(str2)){
    strrev(str2);

    if(strcmp(str1,str2)==0){
        printf("YES\n");
    }
    }
        printf("NO\n");
    return 0;
}
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char word1[80],word2[100],reverse_word[80];
//    int i,j,len;
//    for(;;){
//    scanf("%s",word1);
//    scanf("%s",word2);
//    len=strlen(word2);
//    for(i=0,j=len-1;i<len;i++,j--){
//        reverse_word[i]=word2[j];
//    }
//    reverse_word[i]='\0';
//    if(strcmp(word1,reverse_word)==0){
//        printf("YES\n");
//    }
//    else{
//        printf("NO\n");
//    }
//}
//    return 0;
//


//#include<stdio.h>
//int main()
//{
//    int a,b,c,x=0,y=0,z=0;
//    int n;
//    scanf("%d",&n);
//    while(n--){
//    scanf("%d%d%d",&a,&b,&c);
//    x+=a;
//    y+=b;
//    x+=c;
//    }
//    if(x==0 && y==0 && z==0){
//    printf("YES\n");
//    }
//    else{
//        printf("NO\n");
//    }
//    return 0;
//}
//


