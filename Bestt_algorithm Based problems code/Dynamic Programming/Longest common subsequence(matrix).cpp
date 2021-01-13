
#include<bits/stdc++.h>
using namespace std;
#define sz 101
#define diag  1
#define left 2
#define up 3
int main()
{
    string seqA,seqB;
    int lenA,lenB,mat[sz][sz],dir[sz][sz];
    cin>>seqA>>seqB;
    lenA=seqA.size();
    lenB=seqB.size();
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
                dir[i][j]=diag;
            }
            else{
                mat[i][j]=max(max(mat[i-1][j],mat[i][j-1]),mat[i-1][j-1]);
                if(mat[i][j]==mat[i-1][j])
                    dir[i][j]=up;
                else if(mat[i][j]==mat[i][j-1])
                    dir[i][j]=left;

                else
                    dir[i][j]=diag;
        }
    }
}
cout<<"LCS length: "<<mat[lenA][lenB];
int i=lenA;
int j=lenB;
string seqC="";
     while(i>0 && j>0){
        if(dir[i][j]==diag){
            if(seqA[i-1]== seqB[j-1]){
                seqC+=seqA[i-1];
            }
            i--;
            j--;
        }
        else if(dir[i][j] == left){
            j--;
        }
        else
            i--;
     }
     reverse(seqC.begin(),seqC.end());
     cout<<"LCS String: "<<seqC;
return 0;
}
*/
/*
TGCCAG
ATGACG

*/


//from website
/*
#include <bits/stdc++.h>
using namespace std;
char str1[1000],str2[1000];
int mat[1001][1001];
int main()
{

  gets(str1);int m=strlen(str1);
  gets(str2);int n=strlen(str2);
   memset(mat,0,sizeof(mat));
   for (int i=1; i<=m; i++){
     for (int j=1; j<=n; j++){
        if (str1[i-1] == str2[j-1]){
         mat[i][j] = mat[i-1][j-1] + 1;
        }
       else
         mat[i][j] = max(mat[i-1][j], mat[i][j-1]);
     }
   }
   int index = mat[m][n];
   char LCS[index+1];
   LCS[index] = '\0'; // Set the terminating character
   int i = m, j = n;
   while (i > 0 && j > 0){
      if (str1[i-1] == str2[j-1]){
          LCS[index-1] = str1[i-1]; // Put current character in result
          i--; j--;
           index--;
      }
      else if (mat[i-1][j] > mat[i][j-1]){
         i--;
      }
      else j--;
   }
   printf("LCS string %s",LCS);
  return 0;
}
*/


#include <bits/stdc++.h>
using namespace std;
char str1[1000],str2[1000];
int mat[1001][1001];
int main()
{

  gets(str1);
  int m=strlen(str1);
  gets(str2);
  int n=strlen(str2);
  memset(mat,0,sizeof(mat));
   for (int i=1; i<=m; i++){
     for (int j=1; j<=n; j++){
        if (str1[i-1] == str2[j-1]){
         mat[i][j] = mat[i-1][j-1] + 1;
        }
       else
         mat[i][j] = max(mat[i-1][j], mat[i][j-1]);
     }
   }
   cout<<mat[m][n]<<endl;
}
