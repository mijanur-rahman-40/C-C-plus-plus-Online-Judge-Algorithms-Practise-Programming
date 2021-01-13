

#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n,arr[1000];
	int i;
	while (true) {
		cin >> n;
		if (n == 0)
			break;
     while (true) {
          cin >>arr[0];
          if(arr[0] == 0){
               cout <<endl;
				break;
			}
          for (i = 1; i < n; i++) {
               cin >>arr[i];
			}
          int c_Ch= 1,I_x = 0;
          stack<int>st;
          while(c_Ch<=n){
          st.push(c_Ch);
          while(!st.empty() && st.top() ==arr[I_x]){
                    st.pop();
                    I_x++;
                    if(I_x>=n)
                         break;
				}
				c_Ch++;
			}
			if(st.empty()) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}

	return 0;
}



/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;
   // vector <int> :: iterator it;
    //vector <int> :: reverse_iterator rit;
   int tst;
   cin>>tst;
    for (int i=1; i <=tst; i++){
     int num;
     cin>>num;
        v.push_back(num);
    }
    for(int it=v.size()-1;it>=0;it--){
        cout<<v[it]<<' ';
    }
    return 0;

}


*/
