#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;cin>>tst;int num1;cin>>num1;
    map<char ,double>mp;
    map<char ,double>::iterator it;
    while(tst--){
    for(int i=0;i<num1;i++){
       char k;double v;cin>>k>>v;
       mp[k]=v;
    }
    int num2;cin>>num2;int total=0;
    cin.ignore();
    for(int i=0;i<num2;i++){
     string str="";
     getline(cin,str);
     for(int j=0;j<str.size();j++){
          it=mp.find(str[i]);
          if(it!=mp.end())
               total+= it->second;
     }
         }
          total/= 100;
		printf("%0.2lf$\n",total);
		mp.clear();
		total=0;
}
return 0;
}

/*

#include<cstdio>
#include<map>
using namespace std;

int main(){
    long T; scanf("%d", &T);
    map<char, int> m;
    for(int t = 0; t<T; t++){
        int K; scanf("%d", &K);
        m.clear();
        int price;
        char c;
        for(int k = 0; k<K; k++){
            getchar(); c = getchar();
            scanf("%d", &price);
            m[c] = price;

        }
        int M; scanf("%d", &M);
        c = getchar();
        long count = 0;
        while((c = getchar())!=EOF)
            if(c!=' ' || c!='\n') count += m[c];
        printf("%0.2f$\n", count/100.0);
    }
    return 0;
}

/*
#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;

int main()
{
	int T, K, M, l;
	map <char, double> mymap;
	map <char, double>::iterator it;
	char c;
	string line;
	double v, total;

	scanf("%d", &T);
	while(T--)
	{
		total = 0;
		scanf("%d", &K);
		for(int i = 0; i < K; i++){
			cin >> c >> v;
			mymap[c] = v;
		}
		scanf("%d", &M);
		cin.ignore();
		for(int i = 0; i < M; i++){
			line = "";
			getline(cin, line);
			l = line.size();
			for(int j = 0; j < l; j++){
				it = mymap.find(line[j]);
				if(it != mymap.end())
					total += it->second;
			}
		}
		total /= 100;
		printf("%0.2lf$\n",total);
		mymap.clear();
	}
	return 0;
}
*/
