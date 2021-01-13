
#include<bits/stdc++.h>
using namespace std;
int arr[11][11];
int num;
int main()
{
    int j =1;
    while(scanf("%d",&num) && num){
            vector<int>vec;

    for(int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            scanf("%d",&arr[i][j]);
          }
      }

       if(num == 1){
        cout<<"Case "<<j++<<": "<<arr[1][1];
     }

     else{
        for(int i=1; i<=num/2; i++){
            int sum1 = 0,sum2 = 0 ;

        for(int j = i; j<=num - i + 1; j++){
            sum1 += arr[i][j] + arr[num-i+1][j];
        }

        for(int k = i+1; k<=num-i; k++){
            sum2 += arr[k][i] + arr[k][num-i+1];
        }

        vec.push_back(sum1 + sum2);
    }
    cout<<"Case "<<j++<<":"<<" "<<vec[0];

    for(int i=1; i<vec.size(); i++){
        cout<<" "<<vec[i];
    }

    if(num%2 == 1)
        cout<<" "<<arr[num/2+1][num/2+1];
      }

      cout<<endl;
    }
    return 0;
}






















