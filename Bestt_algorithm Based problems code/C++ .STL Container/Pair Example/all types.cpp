#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    pair<int,char>pai;
    pai.first=100;
    pai.second='R';
    cout<<pai.first<<" "<<pai.second;
        return 0;
      */
     //initializing pair
     /*
    pair <string,double>pai("GeeksForGeeks", 1.23);
    cout << pai.first << " " ;
    cout << pai.second << endl ;
    */
    //CPP program to illustrate auto-initializing of pair STL
  /*
    pair <int, double> PAIR1 ;
    pair <string, char> PAIR2 ;
    cout << PAIR1.first ;
    cout << PAIR1.second ;
    cout << " ";
    cout << PAIR2.first ;
    cout << PAIR2.second ;
    */
    //make_pair()
  /*
 pair <int, char> PAIR1 ;
    pair <string, double> PAIR2 ("GeeksForGeeks", 1.23) ;
    pair <string, double> PAIR3 ;
    PAIR1.first = 100;
    PAIR1.second = 'G' ;
    PAIR3 = make_pair ("GeeksForGeeks is Best",4.56);
    cout << PAIR1.first << " " ;
    cout << PAIR1.second << endl ;
    cout << PAIR2.first << " " ;
    cout << PAIR2.second << endl ;
    cout << PAIR3.first << " " ;
    cout << PAIR3.second << endl ;
    */
    /*
    operators(=, ==, !=, >=, <=)
    pair<int, int>pair1 = make_pair(1, 9);
    pair<int, int>pair2 = make_pair(9, 3);
    cout << (pair1 == pair2) << endl;
    cout << (pair1 != pair2) << endl;
    cout << (pair1 >= pair2) << endl;
    cout << (pair1 <= pair2) << endl;
    cout << (pair1 > pair2) << endl;
    cout << (pair1 < pair2) << endl;
    */
    //swapping two pair
    /*
    pair<char, int>pair1 = make_pair('A', 1);
    pair<char, int>pair2 = make_pair('B', 2);

    cout << "Before swapping:\n " ;
    cout << "Contents of pair1 = " << pair1.first << " " << pair1.second<<endl;
    cout << "Contents of pair2 = " << pair2.first << " " << pair2.second <<endl;
    pair1.swap(pair2);

    cout << "\nAfter swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " " << pair1.second <<endl;
    cout << "Contents of pair2 = " << pair2.first << " " << pair2.second <<endl;
    */
    pair<string,int>pai;
    vector<pair<string,int> >vec;
     vector<pair<string,int> >::iterator it;
    for(int i=0;i<3;i++){
        int num;string str;
        cin>>str>>num;
        vec.push_back(make_pair(str,num));
    }
//    for(it=vec.begin();it!=vec.end();it++){
//        cout<<it->first<<" "<<it->second<<endl;
//    }
for(int i=0;i<vec.size();i++){
    cout<<vec[i].first<<endl;
}
for(int i=0;i<vec.size();i++){
    cout<<vec[i].second<<endl;
}
another use
 queue<pair<int,int> >q;
return 0;
}
