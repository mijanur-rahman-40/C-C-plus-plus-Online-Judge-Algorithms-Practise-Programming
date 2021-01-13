/*
vector<vector<int> > matrix;
for(int i = 0; i<RR; i++)
{
    for(int j = 0; j<CC; j++)
    {
    cout<<"Enter the number for Matrix 1";
         cin>>matrix[i][j];
    }
}


#include<iostream>
#include<vector> // for 2D vector
using namespace std;

int main()
{
    // Initializing 2D vector "vect" with
    // values
    vector< vector<int> > vect{{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}};

    // Displaying the 2D vector
    for (int i=0; i<vect.size(); i++)
    {
        for (int j=0; j<vect[i].size() ;j++)
            cout << vect[i][j] << " ";
        cout << endl;
    }

    return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int> >vec;
    for(int i=0; i<5; i++){
        vec.push_back(vector<int>());
     for(int j=0; j<5; j++){
        vec[i].push_back(i*j);
    }
    }
    for(int j=0; j<5; j++){
    for(int i=0; i<vec[j].size(); i++){
        cout<<vec[i][j]<<" ";
      }
      cout<<endl;
    }
}
