/*
#include<bits/stdc++.h>
using namespace std;
int LCS_len(char strA[],char strB[],int lenA,int lenB)
{
    if(lenA==0 || lenB==0){
        return 0;
    }
    if(strA[lenA-1]==strB[lenB-1]){
        return LCS_len(strA,strB,lenA-1,lenB-1)+1;
    }
    else
    {
return max(LCS_len(strA,strB,lenA,lenB-1),LCS_len(strA,strB,lenA-1,lenB));
    }
}
int main()
{
    char strA[100],strB[100];
    gets(strA);gets(strB);
    int lenA=strlen(strA);
    int lenB=strlen(strB);
    int ans=LCS_len(strA,strB,lenA,lenB);
    cout<<"LCS length = "<<ans<<endl;
    return 0;
}

*/

/
#include<bits/stdc++.h>
using namespace std;
string str1,str2;
int dp[100][100];
int LCS(int i,int j)
{
    int result;
    if(str1[i] == '\0' || str2[j] == '\0')
        return 0;
    if(dp[i][j] !=-1 ) return dp[i][j];
    if(str1[i] == str2[j]){
       result = 1 + LCS(i+1,j+1);
    }
    else{
       result = max(LCS(i+1,j),LCS(i,j+1));
    }
    dp[i][j] = result;
    return result;
}
int main()
{
    cin>>str1>>str2;
    memset(dp,-1,sizeof(dp));
    cout<<"LCS length : "<<LCS(0,0)<<endl;
}


*/

#include<bits/stdc++.h>
using namespace std;
string str1,str2;
int dp[100][100];
int LCS(int i,int j)
{
    if(str1[i] == '\0' || str2[j] == '\0')
      return 0;
    if(dp[i][j] !=-1 ) {
        return dp[i][j];
    }
    if(str1[i] == str2[j]){
       dp[i][j] = 1 + LCS(i+1,j+1);
    }
    else{
       dp[i][j] = max(LCS(i+1,j),LCS(i,j+1));
    }
    return  dp[i][j];
}
int main()
{
    cin>>str1>>str2;
    memset(dp,-1,sizeof(dp));
    cout<<"LCS length : "<<LCS(0,0)<<endl;
}
