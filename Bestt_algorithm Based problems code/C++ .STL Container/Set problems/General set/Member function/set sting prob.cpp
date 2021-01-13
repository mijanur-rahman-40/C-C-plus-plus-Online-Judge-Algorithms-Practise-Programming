 #include<iostream>
 #include<set>
 using namespace std;
 int main()
{
    set<string> s;

    s.insert("hi");

    set<string>::iterator it = s.find("hi");

    if (it == s.begin()) {
        cout << "Matched." << endl;
    } else {
        cout << "Not matched." << endl;
    }

    return 0;
}
