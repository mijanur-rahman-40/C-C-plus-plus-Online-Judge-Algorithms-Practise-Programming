#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    scanf("%d",&num);
    int siz = 2*num -1;
    int arr[siz][siz];
    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            if(j<=i){
                arr[i][j] = num - j;
                //cout<<"arr["<<i<<"]["<<j<<"] = "<<num-j<<endl;
            }
            else{
                arr[i][j] = num - i;
                 //cout<<"arr["<<i<<"]["<<j<<"] = "<<num-j<<endl;
            }
        }
    }
    cout<<endl;
        for(int i=0; i<num; i++){
            for(int j=siz -1; j>=num; j--)
            {
                arr[i][j] = arr[i][siz - 1 -j];
        //cout<<"arr["<<i<<"]["<<j<<"] = "<<arr[i][j]<<endl;
            }
        }
 cout<<endl;
      for(int i =siz-1; i>=num; i--){		//		taking water image for below half
        for(int j =0; j<siz; j++)
        {
            arr[i][j] = arr[siz - 1 - i][j];
             //cout<<"arr["<<i<<"]["<<j<<"] = "<<arr[i][j]<<endl;
        }
    }
    for (int i = 0; i<siz; i++){			//		printing the 2D - array
        for (int j = 0; j<siz; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


