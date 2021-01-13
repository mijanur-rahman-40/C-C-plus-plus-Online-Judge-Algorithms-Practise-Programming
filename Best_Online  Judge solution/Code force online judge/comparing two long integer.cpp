//this is the best
#include<bits/stdc++.h>
using namespace std;
int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);

	string s1,s2;
	cin>>s1>>s2;
	int count1=0,count2=0;
	while(count1<s1.length() && s1[count1]=='0'){
        ++count1;
    }
	while (count2<s2.length() && s2[count2] == '0'){
	++count2;
	}
	if(s1.length()-count1<s2.length()-count2) {
		cout <<'<'<< endl;//(00012,00120),(12,123);
		 return 0;
	}
	else if(s1.length()-count1 >s2.length()-count2) {
		cout <<'>'<< endl;//(000120,0012),(123,12);
		return 0;
	}
	else {
		for (size_t i=0;i< s1.length()-count1; ++i) {
			if (s1[count1+i]==s2[count2+i])//(0012,0012),(12,12),(0012,000012);
                continue;
			if (s1[count1+i]<s2[count2+i])// (0012,0032),(12,32),(0012,000032);
			cout<<'<'<<endl;
			else cout <<'>'<< endl;//(0042,0032),(42,32),(0042,000032);
			return 0;
		}
	}

	cout<<'='<< endl;
	return 0;
}
/*
#include <cstdio>
#include <cstring>

const int N = (int) 1e6 + 100;
char a[N], b[N];

int main() {
  scanf("%s%s", a, b);
  int l = 0, r = 0, n = int(strlen(a)), m = int(strlen(b));
  while (a[l] == '0') {
    ++l;
  }
  while (b[r] == '0') {
    ++r;
  }
  n -= l;
  m -= r;
  if (n != m) {
    puts(n > m ? ">" : "<");
    return 0;
  }
  for (int i = 0; i < n; ++i) {
    if (a[l + i] != b[r + i]) {
      puts(a[l + i] > b[r + i] ? ">" : "<");
      return 0;
    }
  }
  puts("=");
  return 0;
}



#include<bits/stdc++.h>
using namespace std;
int main(){
    char stra[1000005],strb[1000005];
    int lena,lenb, i,j;
    scanf("%s",stra);
    scanf("%s",strb);
    lena=strlen(stra);
    lenb=strlen(strb);
    for(i=0;i<lena; i++){
        if(stra[i]!='0')
            break;
    }
    for(j=0;j<lenb; j++)
        if(strb[j]!='0')
            break;
    if(lena-i > lenb-j)
        printf(">\n");
    else if(lena-i<lenb-j)
     printf("<\n");
    else {
        for(;stra[i]==strb[j]&&i<lena&&j<lenb;i++,j++){}
        if(stra[i]==strb[j]) printf("=\n");
        else if(stra[i]>strb[j]) printf(">\n");
        else printf("<\n");
    }
    return 0;
}
*/
