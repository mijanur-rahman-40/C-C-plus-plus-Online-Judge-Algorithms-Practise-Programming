
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tst;
	cin>>tst;
	while(tst--)
	{
	    int num;
		cin>>num;
        int arr[num];
		for(int i=0; i<num; i++){
            cin>>arr[i];
		}
		int list[num+1];
		for(int i=0; i<num+1; i++){
			list[i]=1;
		}
		for(int i=1; i<num; i++)
            {
			for(int j=0; j<i; j++)
			{
				if( arr[i] > arr[j] && list[i] < list[j] + 1 ){
					list[i] = list[j] + 1;
				}
			}
		}
		int max=0;
		for(int i=0; i<num; i++)
		{
			if(list[i]>max)
				max=list[i];
		}
		cout<<"Longest Increasing Subsequence is : "<<max<<endl;
	 	int temp = max;
        vector<int>indexes;
      for( int i=num-1; i >= 0; --i )
      if( list[i] == temp )
        {
        indexes.push_back(i);
         temp--;
   }
     cout<<"Subsequence is : ";
     reverse(indexes.begin(),indexes.end());
     for(int i=0; i<indexes.size();  i++){
        cout<<arr[indexes[i]]<<" ";
     }
     cout<<endl;
	}
	return 0;
}


/*
7
3 4 -1 0 6 2 3
max = 4;
list[0] =  1
list[1] =  2
list[2] =  1
list[3] =  2
list[4] =  3
list[5] =  3
list[6] =  4
increasing subsequence :   -1 0 2 3



9
10  22  9  33  21  50  41  60  80
6

23
2
234
234
2345
23456
6
*/
/*

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--){
        int num;
        cin>>num;
        int arr[1000];
        for(int i=0;i<num;i++){
            cin>>arr[i];
        }
        int mx=0;
        int arr1[num];
        for(int i=0;i<num;i++){
            arr1[i]=1;
        }
        for(int i=1;i<num;i++){
           for(int j=0;j<i;j++){
             if(arr[i]>arr[j]){
            arr1[i] = max(arr1[i],arr1[j]+1 );
                    }
                 }
            }
            for(int i=0; i<num; i++){
			if(arr1[i]>mx)
				mx=arr1[i];
		    }
            cout<<mx<<endl;
    }
            return 0;
}

*/
//It does not work with duplicate word
//complexity nlogn

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>S;
    set<int>::iterator it;
    int num;
    scanf("%d",&num);
    int arr[1000];
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    for(int i=0; i<num; i++){
        S.insert(arr[i]);
        it=S.find(arr[i]);
        it++;
        if(it!=S.end()){
            S.erase(it);
        }
    }
    cout<<S.size()<<endl;
    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>:: iterator it;
    int n,num;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&num);
        it=lower_bound(vec.begin(),vec.end(),num);
        if(vec.end() == it)
        {
            vec.push_back(num);
        }
        else
            vec[it-vec.begin()] = num;
    }
    // can not print increasing sequence.
    /*
     for(int i=0; i<vec.size(); i++){
            cout<<vec[i]<<" ";
     }

    printf("LIS size is %d\n",vec.size());
    return  0;
}

*/




//Dynamic Programming solution to construct Longest Increasing Subsequence
/*
#include <iostream>
#include <vector>
using namespace std;

// Utility function to print LIS
void printLIS(vector<int>& arr)
{
    for (int x : arr)
        cout << x << " ";
    cout << endl;
}

// Function to construct and print Longest Increasing
// Subsequence
void constructPrintLIS(int arr[], int n)
{
    // L[i] - The longest increasing sub-sequence
    // ends with arr[i]
    vector<vector<int> > L(n);

    // L[0] is equal to arr[0]
    L[0].push_back(arr[0]);

    // start from index 1
    for (int i = 1; i < n; i++)
    {
        // do for every j less than i
        for (int j = 0; j < i; j++)
        {
            // L[i] = {Max(L[j])} + arr[i]
            //where j < i and arr[j] < arr[i]
            if ((arr[i] > arr[j]) &&
                    (L[i].size() < L[j].size() + 1))
                L[i] = L[j];
        }

        // L[i] ends with arr[i]
        L[i].push_back(arr[i]);
    }

    // L[i] now stores increasing sub-sequence of
    // arr[0..i] that ends with arr[i]
    vector<int> max = L[0];

    // LIS will be max of all increasing sub-
    // sequences of arr
    for (vector<int> x : L)
        if (x.size() > max.size())
            max = x;

    // max will contain LIS
    printLIS(max);
}

// Driver function
int main()
{
    int arr[] = { 3, 2, 6, 4, 5, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // construct and print LIS of arr
    constructPrintLIS(arr, n);

    return 0;
}
*/

/*
#include <iostream>
#include <vector>

// Binary search (note boundaries in the caller)
int CeilIndex(std::vector<int> &v, int l, int r, int key) {
    while (r-l > 1) {
    int m = l + (r-l)/2;
    if (v[m] >= key)
        r = m;
    else
        l = m;
    }

    return r;
}

int LongestIncreasingSubsequenceLength(std::vector<int> &v) {
    if (v.size() == 0)
        return 0;

    std::vector<int> tail(v.size(), 0);
    int length = 1; // always points empty slot in tail

    tail[0] = v[0];
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] < tail[0])
            // new smallest value
            tail[0] = v[i];
        else if (v[i] > tail[length-1])
            // v[i] extends largest subsequence
            tail[length++] = v[i];
        else
            // v[i] will become end candidate of an existing subsequence or
            // Throw away larger elements in all LIS, to make room for upcoming grater elements than v[i]
            // (and also, v[i] would have already appeared in one of LIS, identify the location and replace it)
            tail[CeilIndex(tail, -1, length-1, v[i])] = v[i];
    }

    return length;
}

int main() {
    std::vector<int> v{ 2, 5, 3, 7, 11, 8, 10, 13, 6 };
    std::cout << "Length of Longest Increasing Subsequence is " << LongestIncreasingSubsequenceLength(v) << 'n';
   return 0;
}

*/

/*
#include <iostream>
using namespace std;
//! @author : Rajul
//! code is poetry

//Program to find longest Increasing Subsequence in nlog(n) time

//! Function to do ceil binary search
//! Usage: To return either position of search's value or position of smallest
//! elememt in array which is greater then value of search
//! Here n = size of array small
int BinarySearch(int *arr,int *small,int n, int value)
{
   int low = 0;
   int high = n-1;
   int mid;
   while (low < high)
   {
       mid = low + ((high - low) / 2);
       //! if array's mid value is greater then search value then select
       //! high as mid , this is where we are making it a ceil binary search
       if (arr[small[mid]] > value)
           high = mid;
       else if (arr[small[mid]] < value)
           low = mid + 1;
       else
           return mid;// found
   }
   return low;// not found
}

//! function to print longest Increasing Subsequence with nlog(n) complexity
int LIS(int *arr, int n)
{
    int *small = new int[n];
    int *parent = new int[n];
    int size = 0;
    for(int i=0 ; i<n ;i++)
    {
        if(i == 0)
        {
            small[size] = i;
            parent[i] = -1;
        }
        //! Find the "index" of the smallest element in array small, which is >=than X,
        //! and change it to X. Here parent[indexOfX] = S[index - 1].
        else if(arr[i] <= arr[small[size]])
        {
            int pos = BinarySearch(arr,small,size+1,arr[i]);
            small[pos] = i;
            if(pos != 0)
            {
                 parent[i] = small[pos-1];
            }
        }
        //! parent[indexOfX] = Last Element Of S
        else
        {
            size = size+1;
            small[size] = i;
            parent[i] = small[size-1];
        }
    }
    cout<<"Length of Longest Increasing Subsequence = "<<size+1<<endl;

    int pos = small[size];
    //! print Longest Increasing Subsequence
    while(size >=0)
    {
        cout<<arr[pos]<<endl;
        pos = parent[pos];
        size--;
    }
}

int main( )
{
    int arr[] = {99, -7, 10, 9, 2, 3, 8, 8, 1, 2, 3};
    unsigned int size = sizeof(arr)/sizeof(int);
    LIS(arr,size);
    return 0;
}


*/

