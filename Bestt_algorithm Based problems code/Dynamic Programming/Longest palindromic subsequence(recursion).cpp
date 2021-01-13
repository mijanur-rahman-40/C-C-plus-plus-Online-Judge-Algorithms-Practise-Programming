#include<bits/stdc++.h>
using namespace std;
int Palindrome(string str,int i,int j)
{
    if(i==j)
        return 1;
    if(str[i] == str[j]){
        if(i+1 == j)
            return 2;
        else
            return Palindrome(str,i+1,j-1)+2;
    }
    else
        return max(Palindrome(str,i+1,j),Palindrome(str,i,j-1));

}
int main()
{
    string str;
    cin>>str;
    cout<<"Longest Palindromic subsequence is : "<<Palindrome(str,0,str.size())<<endl;
}
