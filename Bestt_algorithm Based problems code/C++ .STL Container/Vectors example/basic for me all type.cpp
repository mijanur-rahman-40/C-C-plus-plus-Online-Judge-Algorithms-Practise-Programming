#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int>v;
    //v.push_back(32);
    // v.push_back(6);

       //cout<<"my vector size="<<v.size()<<endl;
    /* v.push_back(325);
       v.push_back(52);
    cout<<"my vector size="<<v.size()<<endl;
    //exes the value
    for(int i=0;i<v.size();i++){
    cout<<"my vectors="<<i<<" "<<v[i]<<endl;
    }
    */
   //int num;
   //cin>>num;
/*for(int i=0;i<5;i++){
    vec.push_back(i);
}
for(int i=0;i<5;i++){
    cout<<vec[i]<<endl;
}
*/
      v.push_back(32);
      v.push_back(6);
       v.push_back(325);
       v.push_back(52);

     /* int n;
      while(num--){
        cin>>n;
    v.push_back(n);
    */

  // v.pop_back();

           for(int i=0;i<v.size();i++){
    //cout<<v[i]<<endl;
                   cout<<"vector= "<<i<<"  "<<v[i]<<endl;
}
            //v.erase(v.begin()+2);
            //v.erase(remove(v.begin(),v.end(),6),v.end());
            v.clear();
            //cout<<"my vector size="<<v.size()<<endl;
            cout<<endl;
            cout<<"is vector empty "<<v.empty()<<endl;
                 for(int i=0;i<v.size();i++){
                           cout<<"vector= "<<i<<"  "<<v[i]<<endl;
}
    return 0;
}
