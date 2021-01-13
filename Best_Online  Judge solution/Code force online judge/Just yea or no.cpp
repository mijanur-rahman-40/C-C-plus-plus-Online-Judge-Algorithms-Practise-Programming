#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, flag;
    char s[305][305], diag, other;
    flag=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%s", s[i]);
    diag=s[0][0];
    other=s[0][1];
    if(diag==other) flag=1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==j || i+j==n-1) {
                if(s[i][j]!=diag) {
                    flag=1;
                    break;
                }
            }
            else {
                if(s[i][j]!=other) {
                    flag=1;
                    break;
                }
            }
        }
        if(flag) break;
    }
    if(flag) printf("NO");
    else printf("YES");
    return 0;
}

