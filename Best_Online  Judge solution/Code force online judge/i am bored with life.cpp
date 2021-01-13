//#include<iostream>
//using namespace std;
//long int fact(int a1)
//{
//    int fact=1,i;
//  for(i=1;i<=a1;i++){
//    fact=fact*i;
//  }
//  return fact;
//}
//long int fact1(int a2)
//{
//    long int fact=1,i;
//  for(i=1;i<=a2;i++){
//    fact=fact*i;
//  }
//  return fact;
//}
//
//
//
//int main()
//{
//   long int a,b,c,d,n;
//    cin>>a>>b;
//    c=fact(a);
//    d=fact1(b);
//    while(d>0){
//        n=c%d;
//        c=d;
//        d=n;
//    }
//    cout<<c<<endl;
//    return 0;
//
//}


#include<iostream>
using namespace std;
    int main()
    {
    int a,b,c;
    cin>>a>>b;
    c=min(a,b);
    int fact=1;
    for(int i=1;i<=c;i++){
    fact=fact*i;
    }
    cout<<fact<<endl;
  return 0;
}
#include<cstdio>
#include<iostream>

using namespace std;

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    a=min(a,b);
    int temp=1;
    for(register int i=1;i<=a;i++) temp*=i;
    printf("%d\n",temp);
    return 0;
}
