
#include<bits/stdc++.h>
using namespace std;
string str="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main()
 {
    char str1[1000];
    while (gets(str1)) {
        for (int i=0; i<strlen(str1); i++)
            if (str1[i]==' ') printf(" ");
            else {
                for (int j=1; j<str.size(); j++)
                    if (str1[i]==str[j]) {
                        printf("%c",str[j-1]);
                        break;
                    }
            }
        cout << endl;
    }
}
