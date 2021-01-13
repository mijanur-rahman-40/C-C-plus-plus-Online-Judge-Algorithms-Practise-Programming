#include<bits/stdc++.h>
using namespace std;
int main()
{
    string stone;
 int count= 0;
 int n; cin >>n >> stone;
 for(int i = 1; i <stone.size(); i++ ){
        if(stone[i]==stone[i-1])
         count++;
 }
cout << count << endl;
return 0;
}
