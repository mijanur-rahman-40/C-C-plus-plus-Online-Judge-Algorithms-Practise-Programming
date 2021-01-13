/*
#include<iostream>
#include<utility>
using namespace std;

int main()
{

	int n;
	pair <string, int> student1;			// Pair which can contain a String type and an Integer type value

	student1=make_pair("Vikram",152);			// Initializing using make_pair function
	cout<<"In 1st case, Pair 1 contains: "<<student1.first<<" & "<<student1.second<<endl;

	pair <string, int> student2;
	student2.first="Chester";					// Another way to provide input to a Pair
	student2.second=798;
	cout<<"\nIn 2nd case, Pair contains: "<<student2.first<<" & "<<student2.second<<endl;

	pair<string, int> student3(student2);		// Another way to initialize is to copy the contents of an existing pair into the newly defined Pair
	cout<<"\nIn 3rd case, Pair contains: "<<student3.first<<" & "<<student3.second<<endl;

	return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    typedef pair<int,int>pai;
    vector<pai>vec[100];
    pai p;
    for(int i=0; i<5; i++){
		cin>>p.first>>p.second;
		vec[i].push_back(p);
    }
      for(int i=0; i<5; i++){
			for(int j=0; j<5; j++){
		cout<<vec[i][j].first<<" "<<vec[i][j].second;
    }
      }
}
