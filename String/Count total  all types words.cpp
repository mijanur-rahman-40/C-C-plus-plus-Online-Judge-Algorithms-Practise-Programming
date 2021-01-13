//ae topic a problem ase
/*
#include<bits/stdc++.h>
using namespace std;
int main(void)

{
   char s[100];
    map<string, int> counters;
    map<string,int>::iterator it;
 int  maxlen = 0;
    while (cin >> s)
    {
        ++counters[s];
        if (counters[s] > maxlen)
            maxlen = counters[s];
    }
    for(int  i = 1; i <= maxlen; ++i)
    {
        for (  it = counters.begin();
            it != counters.end(); ++it)
        {
            if (it->second == i)

                cout << it->first << "\t" << it->second << endl;
        }
    }

    return 0;
}

*/
/*
#include <iostream>
#include <map>
using namespace std;
int main ()
{
  int arr[4] = {1,3,2,4};//1,2,2,1,4,5};
  std::map<int,int> dup_map;
  for(int  i=0;i<4;i++)
  {
        if(dup_map.find(arr[i])!=dup_map.end())
        {
            //key exist and hence update the dulpicate count;
            dup_map[arr[i]]++;
        }
        else{
        //it doesn't exist in map
        dup_map.insert(std::pair<int,int>(arr[i],1));//single count of current number

        }

  }
  for(std::map<int,int>::iterator it =dup_map.begin();it!=dup_map.end();it++)
  {

      cout<<"\n Number "<<it->first<<" is repeated "<<it->second<<" times ";
  }
}
// C++ program to find the maximum repeating number
*/
/*
#include<bits/stdc++.h>
using namespace std;

// Returns maximum repeating element in arr[0..n-1].
// The array elements are in range from 0 to k-1
int maxRepeating(int* arr, int n, int k)
{
    // Iterate though input array, for every element
    // arr[i], increment arr[arr[i]%k] by k
    for (int i = 0; i< n; i++)
        arr[arr[i]%k] += k;

    // Find index of the maximum repeating element
    int max = arr[0], result = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            result = i;
        }
    }
    return result;
}

// Driver program to test above function
int main()
{
    int arr[10000];
    //= {2, 3, 3, 5, 3, 4, 1, 7};
   // int n = sizeof(arr)/sizeof(arr[0]);
    int k =3,n=3;
   for(int i=0;i<3;i++){
     scanf("%d",&arr[i]);
   }
    cout << "The maximum repeating number is " <<
         maxRepeating(arr, n, k) << endl;

    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

// Prints unique words in a file
void printUniquedWords(char filename[])
{
    // Open a file stream
    fstream fs(filename);

    // Create a map to store count of all words
    map<string, int> mp;

    // Keep reading words while there are words to read
    string word;
    while (fs >> word)
    {
        // If this is first occurrence of word
        if (!mp.count(word))
            mp.insert(make_pair(word, 1));
        else
            mp[word]++;
    }

    fs.close();

    // Traverse map and print all words whose count
    //is 1
    for (map<string, int> :: iterator p = mp.begin();
         p != mp.end(); p++)
    {
        if (p->second == 1)
            cout << p->first << endl;
    }
}

// Driver program
int main()
{
    // Create a file for testing and write something in it
    char filename[] = "test.txt";
    ofstream fs(filename, ios::trunc);
    fs << "geeks for geeks quiz code geeks practice for qa";
    fs.close();

    printUniquedWords(filename);
    return 0;
}

*/
/*
int main()
{
    // The test string
    std::string str("woo coo woo poo noo chho");

    // Count the number of occurrences for each word
    std::string word;
    std::istringstream iss(str);
    std::map<std::string, std::size_t> occurrences;
    while (iss >> word) ++occurrences[word];

    // Print the results
    for (std::map<std::string, std::size_t>::iterator it = occurrences.begin();
         it != occurrences.end(); ++it)
    {
        std::cout << "Word: " << it->first << "\t Occurrences: " << it->second << std::endl;
    }

    std::cin.get();
    return 0;
}
*/
/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	cout <<"Please enter some words. (Press ENTER and then CTRL+D to finish)"<<endl;
	vector<string> words;
	string word;
	while (cin >> word){
		words.push_back( word);
	}
	cout << "You entered " << words.size() << " words" <<endl;
	for(int i  =0; i < words.size(); i ++){
		cout << words[i]<< "  " ;
	} cout <<endl;


	cout << "Sorting the words" <<endl;
	for(int i  =0; i < words.size(); i ++){
		cout << words[i]<< "  " ;
	} cout <<endl;


	//My alogorithm for unique words in the sentence.
	//1 - sort the entered words
	//2 - then print out a word from the list of words if its not the same as the following word.

	cout << "unique words .." <<endl;
	for(int i  =0; i < words.size() -1; i ++){
		if( words[i] != words[i+1] ) 	cout << words[i]<< "  " ;
	} cout << words[words.size() -1]<<endl;
	return 0;
}
*/
/*
#include <iostream>
#include <sstream>
#include <string>
#include <map>

int main()
{
    // The test string
    std::string str("woo coo woo poo noo chho");

    // Count the number of occurrences for each word
    std::string word;
    std::istringstream iss(str);
    std::map<std::string, std::size_t> occurrences;
    while (iss >> word) ++occurrences[word];

    // Print the results
    for (std::map<std::string, std::size_t>::iterator it = occurrences.begin();
         it != occurrences.end(); ++it)
    {
        std::cout << "Word: " << it->first << "\t Occurrences: " << it->second << std::endl;
    }

    std::cin.get();
    return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<string>str;
     string st;
     while(cin>>st){
          str.push_back(st);
     }
     sort(str.begin(),str.end());
     int size=str.size();
     int wcount=1;
     st=str[0];
     for(int i=1;i<size;i++){
          if(st!=str[i]){
               cout<<st<<" "<<wcount<<endl;
          wcount=0;
          st=str[i];
     }
     wcount++;
     }
 cout<<st<<" "<<wcount<<endl;
     return 0;
}

























