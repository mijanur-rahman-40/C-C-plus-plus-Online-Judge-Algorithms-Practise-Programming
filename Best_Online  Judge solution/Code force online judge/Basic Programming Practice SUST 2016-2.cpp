#include<stdio.h>
int main()
{
   long int a,b,c,sum=0;
   int i;
    scanf("%ld%ld%ld",&a,&b,&c);
    for(i=1;i<=c;i++){
        sum+=a*i;
    }
    if(sum>b){
        printf("%ld\n",(sum-b));
    }
    else {
        printf("0\n");
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
string arr1[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
string arr2[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
string arr3[]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
       int num,i,j;
       cin>>num;
        i=num%10;
        j=num/10;

        if(num<10){
            cout<<arr1[num]<<endl;
        }
       else if(num>=10 && num<=19){
            cout<<arr2[i]<<endl;
        }
      else if(num%10==0 && num>10){
        cout<<arr3[j-2]<<endl;
      }
        else
            cout<<arr3[j-2]<<"-"<<arr1[i]<<endl;
}






#include<stdio.h>
int main()
{
   long int a,b,c,sum=0;
   int i;
    scanf("%ld%ld%ld",&a,&b,&c);
    for(i=1;i<=c;i++){
        sum+=a*i;
    }
    if(sum>b){
        printf("%ld\n",(sum-b));
    }
    else {
        printf("0\n");
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin>>str;
     int flag=0;
    int len=str.size();
    for(int i=0;i<len-1;i++){
        if(str[i]=='A' && str[i+1]=='B'){
            for(int j=i+2;j<len-1;j++){
                if(str[j]=='B' && str[j+1]=='A'){
                        flag=1;
            }
        }
        break;
      }
    }
     for(int i=0;i<len-1;i++){
        if(str[i]=='B' && str[i+1]=='A'){
            for(int j=i+2;j<len-1;j++){
                if(str[j]=='A' && str[j+1]=='B'){
                        flag=1;
            }
        }
        break;
       }
    }
    if(flag==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    vector<int>vec1,vec2;
    scanf("%d",&num);
    int sum=0;
    for(int i=1; i<=num; i+=2){
            vec1.push_back(i);
    }
    sum=0;
    for(int i=2; i<=num; i+=2){
            vec2.push_back(i);
        }
        if(num==1 || num==2){
            cout<<"1"<<endl<<"1"<<endl;
        }
      else if(num==3){
                cout<<"2"<<endl;
            cout<<"1 3"<<endl;
        }
        else{
        cout<<vec1.size()+vec2.size()<<endl;
         for(int i=0;i<vec2.size();i++){
            cout<<vec2[i]<<" ";
        }
        for(int i=0;i<vec1.size();i++){
            cout<<vec1[i]<<" ";
        }

        cout<<endl;
        }
return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;cin>>num;
    string str1,str2;
    cin>>str1>>str2;
    vector<int>vec1,vec2;
    for(int i=0;i<str1.size();i++){
        vec1.push_back(str1[i]-'0');
    }
     for(int i=0;i<str2.size();i++){
        vec2.push_back(str2[i]-'0');
    }
    int ans1=0,ans;
    for(int i=0;i<vec1.size();i++){
       ans=abs(vec1[i]-vec2[i]);
       if(ans<=5){
        ans1+=ans;
       }
       else{
        int a=min(vec1[i],vec2[i]);
        int b=max(vec1[i],vec2[i]);
        int c=a+10;
        ans1+=abs(c-b);
       }
    }
    cout<<ans1<<endl;
    return 0;
}

