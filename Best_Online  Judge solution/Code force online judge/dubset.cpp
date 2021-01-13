//#include<iostream>
//#include<cstdio>
//#include<string>
//using namespace std;
//int main()
//{
//    string str,tmp;
//    cin >> str;
//    int len = str.size();
//    for (int i = 0;i < len;)
//    {
//        string s = str.substr(i,3);
//        if (s == "WUB")
//        {
//            i += 3;
//        }
//        else
//        {
//            tmp += str[i];
//            i++;
//            string s = str.substr(i,3);
//            if (s == "WUB")
//            {
//                tmp += ' ';
//            }
//        }
//    }
//    if (tmp != "")
//        cout << tmp << endl;
//    return 0;
//}



#include <iostream>
using namespace std;

int main() {
	string str;
	cin>>str;
	int flag=1;
	for(int i=0;i<str.size();i++){
	    if(str[i]=='W'&& str[i+1]=='U' && str[i+2]=='B'){
	        i+=2;
        if(flag==0){
	            cout<<" ";
	        }
	        continue;
	    }
    else{
        flag=0;
        cout<<str[i];
	    }
	}
	return 0;
}

/*
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int flag=0;
    char s[205];
    string a="";
    scanf("%s", s);
    for(int i=0; i<strlen(s);) {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') {
            if(flag==0) a+=' ', i+=3, flag=1;
            else i+=3;
        }
        else a+=s[i], i++, flag=0;
    }
    cout<<a;
    return 0;
}
*/
