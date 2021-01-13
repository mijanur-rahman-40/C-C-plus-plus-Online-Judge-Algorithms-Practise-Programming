/*Bismillahir Rahmanir Rahim*/


#include<bits/stdc++.h>
using namespace std;
typedef struct
{
    double weight,price,unitprice;
}object;

double FractionalKnapsack(object obj[],int n,double cap)
{
    double profit = 0.0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(obj[i].unitprice < obj[j].unitprice)
            {
                swap(obj[j],obj[i]);
            }
        }
    }
   /** for(int i=0;i<n;i++)
    {
        cout << "w" << i << "= " << obj[i].weight << ", p" << i << "= " << obj[i].price;
    }*/
    for(int i=0;i<n;i++)
    {
        if(obj[i].weight <= cap)
        {
            profit += obj[i].price;
            cap -= obj[i].weight;
        }
        else
        {
            profit += cap * obj[i].unitprice;
            cap = 0.0;
            break;
        }
    }
    return profit;
}
int main()
{
    int n;
    cin >> n;
    double capacity;
    object obj[n];
    for(int i=0;i<n;i++)
    {
        cin >> obj[i].weight >> obj[i].price;
        obj[i].unitprice = obj[i].price/obj[i].weight;
    }
    cin >> capacity;
    cout << "Maximum Profit: "  << FractionalKnapsack(obj,n,capacity) << endl;
}

/**
5
4 8
7 7
6 3
5 15
8 12
15
6
4 6
6 6
2 5
5 7
2 5
4 5
13
Maximum Profit: 23
5
3 5
6 2
3 4
1 3
4 6
8
Maximum Profit: 14


8
4 5
6 2
6 4
1 4
4 7
5 18
3 58
12 466
30
Maximum Profit: 558.667


*/
/**Maximum Profit : 32 */

/*direwolf*/
