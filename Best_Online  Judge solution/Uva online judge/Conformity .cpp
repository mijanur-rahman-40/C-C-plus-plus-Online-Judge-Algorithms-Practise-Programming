

#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	while(cin >> n) {
		map<string, int> log;
		int maxN = -1;
		string xtr[5];
		for (int i = 0; i < n; i++) {
			cin >> xtr[0] >> xtr[1] >> xtr[2] >> xtr[3] >> xtr[4];
			sort(xtr,xtr + 5);
			string code;
			for (int j = 0; j < 5; j++) {
				code += xtr[j];
			}
			if (!log.count(code)) {
				log[code] = 1;
				maxN = max(maxN, 1);
				//cout<<maxN<<endl;
			} else {
				int m = log[code] + 1;
				log[code] = m;
				maxN = max(maxN, m);
				//cout<<maxN<<endl;
			}
		}
		int count = 0;
		map<string, int>::iterator it;
		for (it = log.begin(); it != log.end(); it++) {
			if (it->second == maxN)
				count += it->second;
		}
		printf("%d\n", count);
	}
	return 0;
}

/*
6
100 101 102 103 488
100 200 300 101 102
200 202 204 206 208
103 102 101 488 100
100 200 300 101 102
200 202 204 206 208
200 202 204 206 208

100 101 102 103 488
100 200 300 101 102
103 102 101 488 100
103 102 101 488 100
200 202 204 206 208
100 200 300 400 444
*/
