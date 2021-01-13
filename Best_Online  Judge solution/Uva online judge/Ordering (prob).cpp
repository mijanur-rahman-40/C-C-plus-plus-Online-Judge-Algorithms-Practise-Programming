
#include<algorithm>
#include<cstdio>
#include<iostream>
#include<map>
#include<sstream>
#include<vector>

using namespace std;

int N;
char a, b, c;
string line;
stringstream ss;
vector<char> elements;
vector<vector<char> > adj;
map<char, bool> vis;

bool valid(char e) {
    for(int i = 0; i < adj[e].size(); i++)
        if(vis[adj[e][i]])
            return false;
    return true;
}

bool dfs(string path) {
    cout<<path<<endl;
    if(path.length() == elements.size()) {
        printf("%c", path[0]);
        for(int i = 1; i < path.length(); i++)
            printf(" %c", path[i]);
        printf("\n");
        return true;
    }
    bool ans = false;
    for(int i = 0; i < elements.size(); i++) {
        if(!vis[elements[i]]) {
            if(valid(elements[i])) {
                vis[elements[i]] = true;
                ans = dfs(path + elements[i]) || ans;
                vis[elements[i]] = false;
            }
        }
    }
    return ans;
}

int main() {
    scanf("%d\n\n", &N);

    for(int T = 0;; T++) {
        if(T > 0) printf("\n");

        getline(cin, line);
        ss.clear();
        ss.str(line);
        elements.clear();
        while(ss >> a)
            elements.push_back(a);
        sort(elements.begin(), elements.end());

        getline(cin, line);
        ss.clear();
        ss.str(line);
        adj.clear();
        adj.resize(256);
        while(ss >> a >> b >> c)
            adj[a].push_back(c);

        if(!dfs(""))
            printf("NO\n");
        if(!getline(cin, line)) break;
    }
}



#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;

string s;
int g[26][26], n, has;
char ans[26], used[26] = {};
void dfs(int Idx) {
    if(Idx == n) {
        has = 1;
        putchar(ans[0]);
        int i;
        for(i = 1; i < n; i++)
            printf(" %c", ans[i]);
        puts("");
        return ;
    }
    int i, j;
    for(i = 0; i < n; i++) {
        if(!used[i]) {
            for(j = 0; j < Idx; j++) {
                if(g[s[i]-'A'][ans[j]-'A'])
                    break;
            }
            if(j == Idx) {
                ans[Idx] = s[i];
                used[i] = 1;
                dfs(Idx+1);
                used[i] = 0;
            }
        }
    }
}
int main() {
    int t;
    scanf("%d", &t);
    getchar();
    string line;
    while(t--) {
        getchar();
        getline(cin, line);
        stringstream sin;
        sin << line;
        s = "";
        while(sin >> line)  s += line;
        sort(s.begin(), s.end());
        getline(cin, line);
        memset(g, 0, sizeof(g));
        sin.clear();
        sin << line;
        while(sin >> line) {
            g[line[0]-'A'][line[2]-'A'] = 1;
        }
        n = s.length();
        has = 0;
        dfs(0);
        if(!has)
            puts("NO");
        if(t)
            puts("");
    }
    return 0;
}
