
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A,B;
    cin>>A>>B;
    int mat[100][100];
    int lenA=A.size();
    int lenB=B.size();
    for(int i=0; i<=lenA; i++){
        mat[i][0]=i;
    }
    for(int i=0; i<=lenB; i++){
        mat[0][i]=i;
    }
    for(int i=1; i<=lenA; i++){
        for(int j=1; j<=lenB; j++){
            if(A[i-1]==B[j-1]){
                //mat[i][j]=mat[i-1][j-1]+1;
                mat[i][j]=mat[i-1][j-1];
            printf("mat[%d][%d] == %d\n",i,j,mat[i][j]);
            }
            else{
                mat[i][j]=min(min(mat[i-1][j],mat[i][j-1]),mat[i-1][j-1])+1;
                  printf("mat[%d][%d] == %d\n",i,j,mat[i][j]);
            }
        }
        cout<<endl<<endl;
    }
    cout<<"Minimum edit distance :: "<<mat[lenA][lenB];
}
/*
// INTENTION EXECUTION
#include<bits/stdc++.h>
using namespace std;
int editDist(string str1,string str2,int m,int n)
{
    if(m==0)  return n;
    if(n==0)  return m;
    if(str1[m-1] == str2[n-1]){
        return editDist(str1,str2,m-1,n-1);
    }
    return min(min(editDist(str1,str2,m,n-1),editDist(str1,str2,m-1,n)),editDist(str1,str2,m-1,n-1))+1;

}

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int ans=0;
    int str1_size=str1.size();
    int str2_size=str2.size();
    ans=editDist(str1,str2,str1_size,str2_size);
    cout<<ans<<endl;
}

/*
#include<stdio.h>
#include<string.h>
#define si 3005
#define min(a,b) (a<b?a:b)
int dp[si][si],l1,l2,dir[si][si];
char ch1[si],ch2[si];

int rec(int i,int j)
{
    if(i<0&&j<0)
		return 0;
	else if(i<0||j<0)
		return i<0?(j+1):(i+1);
	int &ret=dp[i][j];
	if(ret!=-1)
		return ret;
	int p1=rec(i,j-1)+1;  //del
	int p2=rec(i-1,j)+1;  //add
	int p3;
	if(ch1[i]==ch2[j])
		p3=rec(i-1,j-1);
	else
		p3=rec(i-1,j-1)+1;
	if(p1<=p2&&p1<=p3)
		dir[i][j]=1;
	else if(p2<=p1 && p2<=p3)
		dir[i][j]=2;
	else
		dir[i][j]=3;
	ret=min(p1,min(p2,p3));
	return ret;
//	return ret=min(p1,min(p2,p3));
}

void path_prnt(int i,int j)
{
	if(i<0||j<0)
		return;
	if(dir[i][j]==1)
	{
		path_prnt(i,j-1);
		printf(" delete %c",ch1[i]);
	}
	else if(dir[i][j]==2)
	{
		path_prnt(i-1,j);
		printf(" add %c",ch2[j]);
	}
	else
	{
		path_prnt(i-1,j-1);
		if(ch1[i]!=ch2[j])
			printf(" replace %c",ch2[j]);
	}
}

EXECUTION
INTENTION

int main()
{
	int i,j;
	while(gets(ch1))
	{
		gets(ch2);
		l1=strlen(ch1);
		l2=strlen(ch2);
		for(i=0;i<l1;i++)
		{
			for(j=0;j<l2;j++)
				dp[i][j]=-1;
		}
		printf("%d\n",rec(l1-1,l2-1));
		path_prnt(l1-1,l2-1);
		puts("");
	}
	return 0;
}

*/
