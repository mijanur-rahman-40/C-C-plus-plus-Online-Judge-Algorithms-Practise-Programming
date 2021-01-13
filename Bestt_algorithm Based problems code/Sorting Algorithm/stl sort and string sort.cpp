#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    char str[114];
    vector<string>v;
    vector<string>::iterator it;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
        scanf("%s",&str);
        v.push_back(str);
   }
    sort(v.begin(),v.end());
   for (it=v.begin(); it<v.end(); it++) {
      cout << *it<<endl;
   }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int  main()
{
	char str[5][20], t[20];
	int i, j;
	cout<<"Enter any five string (name) : ";
	for(i=0; i<5; i++)
	{
		cin>>str[i];
	}
	for(i=1; i<5; i++)
	{
		for(j=1; j<5; j++)
		{
			if(strcmp(str[j-1], str[j])>0)
			{
				strcpy(t, str[j-1]);
				strcpy(str[j-1], str[j]);
				strcpy(str[j], t);
			}
		}
	}
	cout<<"Strings (Names) in alphabetical order : \n";
	for(i=0; i<5; i++)
	{
		cout<<str[i]<<"\n";
	}

}
*/
