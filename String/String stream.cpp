#include<iostream>
#include<sstream>
using namespace std;
int main()
{/*
  string name="Raju";
  int age=32;
  stringstream ss;
  ss<<"Name is: ";
  ss<<name;
  ss<<" :Age is ";
  ss<<age;
  string info=ss.str();
  cout<<info<<endl;
  //cout<<ss.str()<<endl;
  //string info="Name: " + name +":age " +age;
  //cout<<info<<endl;
return 0;
}
/*
/*
     cout<<"enter a integer value"<<endl;
     int input;
    // cin>>input;
   stringstream ss;
   string st,st1="44";
   ss<<st1;
    ss>>input;
   cout<<" The integer value "<<input+2<<endl;
    cout<<" The string from of integer value "<<st1+"2"<<endl;

 */
   /*
   ss<< 89 <<" Hex: "<<hex<<89<< " Oct"<<oct<<89;
   cout<<ss.str()<<endl;
   int a,b,c;
   string s1;
   ss>>hex>>a;
   ss>>s1;
   ss>>dec>>b;
   ss.ignore(6);
   ss>>oct>>c;
   */


    string input;
//     cout<<"Enter your first name: ";
     getline(cin,input);
//     string first=" not so much: ";
     //cin>>first;
     cout<<input.size();
     //cout<<input.at(3);
     //cout<<input.append(first);
     //cout<<input.insert(4,first,4,3);
     cout<<"Hello "<<input<<" welcome to this tutorial"<<endl;
return 0;
}



  cin.ignore();
      while(1) {
        string st;
        stringstream ss;
        int num;
        vector<int>v;
        getline(cin,st);
        ss<<st;
        while(ss>>num){
          v.push_back(num);
        }
       for(int i=0;i<v.size();i++){
          printf("%c",v[i]);
       }
       printf("\n");
      }
        return 0;
}
