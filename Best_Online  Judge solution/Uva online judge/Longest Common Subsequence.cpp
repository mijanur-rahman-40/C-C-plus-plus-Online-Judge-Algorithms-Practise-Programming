#include<bits/stdc++.h>
using namespace std;
int mat[1010][1010];
int main()
{
    string seqA,seqB;

    int lenA,lenB;
    while(getline(cin,seqA)){
    getline(cin,seqB);
    lenA=seqA.size();
    lenB=seqB.size();
    //memset(mat,0,sizeof(mat));
    for(int i=0; i<=lenA; i++){
        mat[i][0]=0;
    }
     for(int i=0; i<=lenB; i++){
        mat[0][i]=0;
    }
    for(int i=1; i<=lenA; i++){
        for(int j=1; j<=lenB; j++){
            if(seqA[i-1]== seqB[j-1]){
                mat[i][j]=mat[i-1][j-1]+1;
            }
            else{
                mat[i][j]=max(max(mat[i-1][j],mat[i][j-1]),mat[i-1][j-1]);
        }
      }
    }
    cout<<mat[lenA][lenB]<<endl;
    }
    return 0;
}
