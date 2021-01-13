#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    //priority_queue<long>kup;
    vector<long long>kk;
    //vector<long>::iterator it;
    //int arr[35];
    int x=1;
    //vector<int>p;
    map<long,int>p;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        //int x=1;
        if(k==1){
            long f=(pow(-1,x))*(pow(2,x));
            long f1=(pow(-1,x))*(pow(3,x));
            long f2=(pow(-1,x))*(pow(4,x));
            long long final=f+f1+f2;
            kk.push_back(final);
            //x++;
            //p.push_back(x);
            p[final]=x;
            cout<<1153127396812683500+final<<" "<<x<<endl;
            x++;
            //p=x;
            //if(x>4)
                //x=1;

        }
        else{
                //x=1;
            //if(p>=4)
               //p=1;
            sort(kk.begin(),kk.end());
            //sort(p.begin(),p.end());
            //iterator it;
            //for(it=kk.begin();it!=kk.begin();it++)
            cout<<kk.front()+1153127396812683500<<" "<<p[kk.front()]<<endl;
            kk.erase(kk.begin());
            //p.erase(p.begin());
            //kk.pop_front();
        }
    }
    return 0;
}
