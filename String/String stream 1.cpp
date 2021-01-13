
/*
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main ()
{
	stringstream ss;
	int num;
	string input;
	while(getline (cin,input)){
		ss.clear ();
		ss.str (" ");
		ss << input;

		while (ss >> num) {
			cout << num << endl;
		}
	}
	return 0;
}

#include<stdio.h>
stringstream ss;
	int num;
	string input;
	while (getline (cin,input)) {
		ss.clear ();
		ss.str (" ");
		ss << input;

		while (ss >> num) {
			cout << num << endl;
		}
	}

#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main (void)
{
	stringstream ss;
	string inp, w;
	int num;
	char ch;
	while (cin >> inp) {
		inp.resize (inp.size () - 1);
		ss.clear ();
		ss.str ("");
		ss << inp;
		ss >> ch >> num >> ch >> w;
		cout << num << " <--> " << w << endl;
	}

	return 0;
}
*/
/*

#include <utility>      // std::pair
#include <iostream>     // std::cout

int main () {
  std::pair <int,int> foo;
  std::pair <int,int> bar;

  foo = std::make_pair (10,20);
  bar = std::make_pair (10.5,'A'); // ok: implicit conversion from pair<double,char>

  std::cout << "foo: " << foo.first << ", " << foo.second << '\n';
  std::cout << "bar: " << bar.first << ", " << bar.second << '\n';

  return 0;
}


#include <iostream>     // std::cin, std::cout

int main () {
  char str[20];

  std::cout << "Please, enter a word: ";
  std::cin.getline(str,20);
  std::cout << std::cin.gcount() << " characters read: " << str << '\n';

  return 0;
}
*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    stringstream ss;
    string str;
    getline(cin,str);
    ss.str(str);
    vector<int>vec;
    int num;
    while(ss>>num){
        vec.push_back(num);
    }
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]+1<<" ";
    }
}
