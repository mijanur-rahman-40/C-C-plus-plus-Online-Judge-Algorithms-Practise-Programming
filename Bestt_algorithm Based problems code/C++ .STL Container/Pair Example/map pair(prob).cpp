#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<pair<double,int>, double> mymap;
    //map<pair<double,int>, double>::iterator it;
    int x=2,y=3;
    for(int i=0;i<3;i++){
            int num ; cin>>num;
         mymap[make_pair(x,y)]=num;
    }
    /*
   for( int i = 0; i < 3; ++i ){
    for( int j = 0; j < 3; ++j ){
        if( mymap[ i ][ j ] )
            cout << mymap[ i ][ j ] << '\n';
        else
            cout << "Non-existant value." << '\n';
    }
   }*/
   map<pair<int,int>, double>::iterator iter = mymap.find(make_pair(x,y));
if(iter != mymap.end())
{
double value = (*iter).second; // or iter->second;
}
/*
   for(it=mymap.begin();it!=mymap.end();it++){
    cout<<(*it).first<<endl;
   }
*/
   return 0;
}
