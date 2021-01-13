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
