/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,0,0,2,5,1,0,4,5,1,2};
    vector<int>vec[100];
    int arr1[100];
    int coun=0;
    for(int i=0;i<12;i++){
     for(int j=1;j<=12;j++){
          if(arr[i]==arr[j]){
                    coun++;
               vec[arr[i]].push_back(j);
          }
     }
    }
    for(int j=0;j<coun;j++){
      int size=vec[j].size();
    for(int i=0;i<size;i++){
        printf("%d",vec[j][i]);
   }
   cout<<endl;
}
return 0;
}
*/




#include<bits/stdc++.h>
using namespace std;
int main()
{
     map<int,int>mymap;
     int input[]={-102,1,134,134,-102,134,666,-102,1,-2};
     int assign=0,compressed[100],c=0,n=sizeof(input)/sizeof(int);
    for(int i=0;i<n;i++){
     int x=input[i];
     if(!mymap.count(x)){
          mymap[x]=assign;
          printf("Mapping %d with %d\n",x,assign);
          assign++;
     }
     x=mymap[x];
     compressed[c++]=x;
    }
    printf("Compressed array: ");
    for(int i=0;i<n;i++){
     printf("%d ",compressed[i]);
    // puts("");
    }
     return 0;
}

/*
Mapping -102 with 0
Mapping 1 with 1
Mapping 134 with 2
Mapping 666 with 3
Mapping -2 with 4
Compressed array: 0 1 2 2 0 2 3 0 1 4
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
     map<string,int>mymap;
     int edge,assign=0;
     cin>>edge;
     for(int i=0;i<edge;i++){
          char str1[100],str2[100];
          cin>>str1>>str2;
          if(mymap.find(str1)==mymap.end()){
               printf("Mapping %s with %d\n",str1,assign);
               mymap[str1]=assign++;

          }
          if(mymap.find(str2)==mymap.end()){
                printf("Mapping %s with %d\n",str2,assign);
                mymap[str2]=assign++;
          }
          int u=mymap[str1];
          int v=mymap[str2];
          cout<<"Edge :"<<u<<" "<<v<<endl;
     }
}

*/












