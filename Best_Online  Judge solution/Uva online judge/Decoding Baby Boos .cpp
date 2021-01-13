/*
#include<bits/stdc++.h>
#define sz 1000005
using namespace std;
int arr[100];
char str[sz];
int main()
{
    int test,n,a,b;
    char ch1,ch2;
    scanf("%d",&test);
    getchar();

    while(test--){
        gets(str);
        for(int i=65;i<=90;i++){
            arr[i]=i;
        }
        scanf("%d",&n);
        getchar();
        while(n--){
            scanf("%c %c",&ch1,&ch2);
            a=(int)ch1;
            b=(int)ch2;
            for(int i=65;i<=90;i++){
                if(arr[i]==b){
                    arr[i]=a;
                }
            }
            getchar();
        }
        for(int i=0;i<strlen(str);i++){
            if(isalpha(str[i])){
                printf("%c",arr[str[i]]);
            }

            else{
                printf("%c",str[i]);
            }
        }

        printf("\n");
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tst,m;
    char y[1000000],a,b,x[128];
    cin>>tst;
    while(tst--){
        scanf("%s",&y);
        scanf("%d",&n);
        for(int i=0;i<128;i++)
            x[i]=i;
        while(n--){
            cin>>a>>b;
            for(int i='A';i<='Z';i++){
                if(x[i]==b)
                 x[i]=a;
            }
        }
        for(int i=0;i<strlen(y);i++){
            printf("%c",x[y[i]]);
        }
        printf("\n");
    }
    return 0;
}
