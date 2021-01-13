/*
//sort with first element
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector< pair <int,int> > vect;
    int arr[] = {10, 20, 5, 40 };
    int arr1[] = {30, 60, 20, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<n; i++)
        vect.push_back( make_pair(arr[i],arr1[i]) );
    for (int i=0; i<n; i++)
    {
        cout << vect[i].first << " "
             << vect[i].second << endl;
    }
    cout<<endl;
    sort(vect.begin(), vect.end());
    for (int i=0; i<n; i++)
    {
        cout << vect[i].first << " "
             << vect[i].second << endl;
    }
    return 0;
}
*/
//sort with second element
#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main(){
 vector< pair <int,int> > vect;
    int arr[] = {10, 20, 5, 40 };
    int arr1[] = {30, 60, 20, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<n; i++)
        vect.push_back( make_pair(arr[i],arr1[i]) );
    for (int i=0; i<n; i++)
    {
        cout << vect[i].first << " "
             << vect[i].second << endl;
    }
    cout<<endl;
    sort(vect.begin(), vect.end(),sortbysec);
    for (int i=0; i<n; i++)
    {
        cout << vect[i].first << " "
             << vect[i].second << endl;
    }
    return 0;
}
