
#include <bits/stdc++.h>
using namespace std;
 int n=3;
int dotProduct(int vect_A[], int vect_B[])
{
   int product = 0;
    for (int i = 0; i < n; i++)
        product = product + vect_A[i] * vect_B[i];
    return product;
}
void crossProduct(int vect_A[], int vect_B[], int cross_P[])
{
    cross_P[0] = vect_A[1]*vect_B[2]-vect_A[2]*vect_B[1];
    cross_P[1] = (-1)*(vect_A[0]*vect_B[2]-vect_A[2]*vect_B[0]);
    cross_P[2] = vect_A[0]*vect_B[1]-vect_A[1]*vect_B[0];
}
int main()
{

    int vect_A[] = { 3, -5, 4 };
    int vect_B[] = { 2, 6, 5 };
    int cross_P[n];
    cout << "Dot product:";
    cout << dotProduct(vect_A, vect_B) << endl;
    cout << "Cross product:";
    crossProduct(vect_A, vect_B, cross_P);
    for (int i = 0; i < n; i++){
        cout << cross_P[i] << " ";
    }
    return 0;
}
