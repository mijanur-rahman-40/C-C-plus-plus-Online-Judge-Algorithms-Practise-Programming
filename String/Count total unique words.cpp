/*
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<string>names;
    map<string,int>mpp;
    string s;
    int j=0,count=0;
    while(cin>>s){
    	if(mpp.count(s)==0){
    		names.push_back(s);
        	mpp[s]=j;
        	count++;
    	}
    }
//    for(__typeof(mpp.begin())it=mpp.begin();it!=mpp.end();it++){
//        cout<<it->first<<" "<<it->second<<endl;
//        }
	cout<<"unique words "<<count<<endl;
}
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> words;
    cout<<"Please Enter words(Press Ctrl+Z in the end)"<<endl;

    string x; //Word Input
    cin>>x;
    words.push_back(x); //The first word
    int ndw=1; //Number of distinct words

    while(cin>>x) //Input new word
    {
        for(unsigned int counter = 0; counter!=words.size(); ++counter)
        {
            //Check if we already have this word in our list
            if(x!=words[counter])
            {
                if(counter==words.size()-1)//We have reached the end of list
                {
                    words.push_back(x);
                    ndw+=1;
                }
            }
            else
            {
                //If there is a match, leave this word
                break;
            }
        }
    }
    cout<<"number of distinct words are: "<<ndw;
    return 0;
}
