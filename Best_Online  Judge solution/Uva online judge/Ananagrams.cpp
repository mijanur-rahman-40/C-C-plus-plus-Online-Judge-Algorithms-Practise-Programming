#include<bits/stdc++.h>
using namespace std;
map<string,int>mp1;
map<string,string>mp2;
vector<string>vec;
void is_equal(string str)
{
     string str2;
     str2=str;
     for(int i=0; i<str.size(); i++){
         str[i]=toupper(str[i]);
     }
     sort(str.begin(),str.end());
     mp1[str]++;
     mp2[str] = str2;
}
int main()
{
    string str;
    map<string,int>::iterator it;
    while(cin>>str){
        if(str=="#"){
            break;
        }
        else
            is_equal(str);
    }
        for(it=mp1.begin(); it!=mp1.end(); it++){
            if(it->second==1){
                vec.push_back(mp2[it->first]);
            }
        }
       sort(vec.begin(),vec.end());
        for(int i=0; i<vec.size(); i++){
            cout<<vec[i]<<endl;
        }
   return 0;
}

/*

ladder
came
tape
soon
leader
acme
RIDE
lone
Dreis
peat
ScAlE
orb
eye
Rides
dealer
NotE
derail
LaCeS
drIed
noel
dire
Disk
mace
Rob
dries


Disk
NotE
derail
drIed
eye
ladder
soon

Raju
jura
ritu
ruiT
dulal
shirina
*/
