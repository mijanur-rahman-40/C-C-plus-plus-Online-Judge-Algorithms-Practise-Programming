#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int N;
    while(cin>>N)
    {
        vector<int>vec;
        for(int i=0; i<N; i++)
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }
        int count=0;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N-i-1; j++)
            {
                if(vec[j]>vec[j+1])
                {
                    swap(vec[j],vec[j+1]);
                    count++;
                }

            }
        }
        cout<<"Minimum exchange operations : ";
        cout<<count<<endl;
    }
    return 0;
}
