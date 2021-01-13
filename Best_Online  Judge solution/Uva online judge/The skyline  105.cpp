/*
1 11 5
2 6 7
3 13 9
12 7 16
14 3 25
19 18 22
23 13 29
24 4 28
1 11 3 13 9 0 12 7 16 3 19 18 22 3 23 13 29 0
*/
#include<bits/stdc++.h>
using namespace std;
int sky[10050]={0};
vector<int>vec;
int main()
{
    int R,H,L,mx=0;
    while(scanf("%d%d%d",&L,&H,&R)==3){
        for(int j=L; j<R; j++){
            if(H>sky[j]){
                sky[j]=H;
            }
        }
        mx=max(mx,R);
    }
    int temp=0;
     for(int i=1; i<=mx; i++){
        if(sky[i] !=temp){
            vec.push_back(i);
            vec.push_back(sky[i]);
            temp=sky[i];
        }
     }
     printf("%d",vec[0]);
     for(int i=1; i<vec.size(); i++){
        printf(" %d",vec[i]);
     }
     printf("\n");
     return 0;
}
