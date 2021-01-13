#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int>gql(3, 10);
    vector <int> :: iterator it;

    it = gql.begin();
    it = gql.insert(it, 20);

    gql.insert(it, 2, 30);

    it = gql.begin();

    vector <int> gq2(2, 40);
    gql.insert(it + 2, gq2.begin(), gq2.end());

    int gq [] = {50, 60, 70};
    gql.insert(gql.begin(), gq, gq + 3);

    cout << "gquiz1 contains : ";
    for (it = gql.begin(); it < gql.end(); it++)
        cout << *it << '\t';

    return 0;
}
