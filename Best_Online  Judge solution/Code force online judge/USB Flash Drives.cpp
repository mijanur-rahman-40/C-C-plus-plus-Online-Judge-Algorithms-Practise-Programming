/*
#include<bits/stdc++.h>
using namespace std;
void Heapify(int a[], int heapsize, int root)
{
    int left, right, largest = root, temp;
    left = 2 * root;
    right = 2 * root + 1;
    if (left <= heapsize && a[left] < a[root])
        largest = left;
    if (right <= heapsize && a[right] < a[largest])
        largest = right;
    if(largest != root)
    {
        temp = a[largest];
        a[largest] = a[root];
        a[root] = temp;

        Heapify(a, heapsize, largest);
    }
}
void BuildHeap(int a[], int n)
{
   for(int i=n/2; i>=1; i--)
   {
       Heapify(a, n, i);
   }
}
void HeapSort(int a[], int n)
{
    BuildHeap(a, n);
    int heapsize = n, temp;
    for(int i=n; i>=1; i--)
    {
        temp = a[1];
        a[1] = a[i];
        a[i] = temp;

        heapsize--;
        Heapify(a, heapsize, 1);
    }
}

int main()
{
     int num,m,arr[1000];
     scanf("%d%d",&num,&m);
     for(int i=1;i<=num;i++){
          scanf("%d",&arr[i]);
     }
     int i,sum=0;
    HeapSort(arr,num);
    for(i=1; i<=num; i++){
     sum=sum+arr[i];
       if(sum >=m)
       break;
}
   printf("%d\n",i);
   return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n, z;
    cin >> n >> z;

    vector<int> sz;
    for(int i = 0; i < n; ++i) {
        int t; cin >> t;
        sz.push_back(t);
    }
    sort(sz.begin(), sz.end(),greater<int>());

    int i = 0, k = 0;
    while(k < z) {
        k += sz[i];
        i++;
    }

    cout << i << endl;

    return 0;
}
