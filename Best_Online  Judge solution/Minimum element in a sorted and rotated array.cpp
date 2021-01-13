#include<bits/stdc++.h>
using namespace std;
void Heapify(int a[], int heapsize, int root)
{
    int left, right, largest = root, temp;
    left = 2 * root;
    right = 2 * root + 1;
    if (left <= heapsize && a[left] > a[root])
        largest = left;
    if (right <= heapsize && a[right] > a[largest])
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
    int tst;
    cin>>tst;
    while(tst--){
    int number[501], i, n;
    cin >> n;
    for(i=1; i<=n; i++)
        cin >> number[i];
    HeapSort(number,n);
    cout<<number[1]<<endl;
    }
    return 0;
}




