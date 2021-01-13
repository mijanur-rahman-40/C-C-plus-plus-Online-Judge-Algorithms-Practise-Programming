/*
#include <iostream>

using namespace std;

bool **W;
int n, m = 0;
int v, e = 0;
int x, y = 0;
int *vcolor;

bool promising (int i)
{
    int j = 1;
    bool switcher = true;

    while (j && switcher)
    {
        if ( W[i][j] && vcolor[i] == vcolor[j] )
        {
            switcher = false;
        }

        j++;
    }

    return switcher;
}

void m_coloring (int i)
{
    int color;
    if ( promising (i) )
    {
        if (i == n)
        {
            cout << vcolor [1] << " through " << vcolor [n];
        }
        else
        {
            for (color = 1; color <= m; color++)
            {
                vcolor [i + 1] = color;
                m_coloring(i + 1);
            }
        }
    }
}

void initArrays()
{
    for( int i = 0; i < n; i++ )
    {
        W[ i ] = new bool[ n ];
        vcolor[ i ] = 0;
    }
}

void fillW()
{
    for( int i = 0; i < n; i++ )
    {
        for( int j = 0; j < n; j++ )
        {
            if( !W[i][j] )
            {
                W[i][j] = false;
            }
        }
    }
}

void askForEdges()
{
    cout << "How many edges? ";
    cin >> e;
    cout << endl << "Write edges with pattern: [vertex_x][space][vertex_y]:" << endl;

    for( int i = 0; i < e; i++ )
    {
        cin >> x >> y;

        W[x][y] = true;
        W[y][x] = true;
    }
}

void specialMatrixPrint()
{
    cout << endl;
    int i, j;
    for( i = 0; i < n; i++ )
    {
        for( int j = 0; j < n; j++ )
        {
            cout << W[i][j] << " ";
        }
        cout << endl;
    }
}

void showEdgesMatrix()
{
    int i, j = 0;

    cout << endl << "    "; for( i = 1; i < n; i++ ) { cout << i << " "; } cout << endl;
    cout << endl << "    "; for( i = 1; i < n; i++ ) { cout << "# "; } cout << endl;

    for( i = 1; i < n; i++ )
    {
        cout << i << " # ";
        for( int j = 1; j < n; j++ )
        {
            if( W[i][j] == true ) { cout << "1 "; }
            else { cout << "0 "; }
        }

        cout << endl;
    }
}

void showVcolor()
{
    cout << endl;
    for( int i = 1; i < n; i++ )
    {
        cout << i << ": " << vcolor[ i ] << endl;
    }
}

void checkFor( int i )
{
    m = i;
    m_coloring( 0 );
}

int main()
{
    cout << "How many vertexes? " ;
    cin >> n;

    n += 1;

    W = new bool *[ n ];
    vcolor = new int[ n ];

    initArrays();
    askForEdges();
    showEdgesMatrix();

    checkFor( 3 );
    showVcolor();

    cin >> y;

    return 0;
}

*/



#include<bits/stdc++.h>
using namespace std;
int a, number, G[20][20], c[20];
void mcoloring(int p);
int nextvalue(int p);
void mcoloring(int p)


{
            int u;
            while(1)
            {
                        nextvalue(p);
                        cout<<"p : "<<p<<endl;
                        if(c[p] == 0)
                                    break;
                        if(p == number)
                        {
                                    for(u = 1;u <= number;u++)
                                                cout<<" "<<c[u];
                                    cout<<"\n";
                        }
                        else
                                    mcoloring(p + 1);
                                    cout<<"p + 1 : "<<p+1<<endl;
            }
}
int nextvalue(int p)
{
            int l;
            while(1)
            {
                        c[p] = (c[p] + 1) % (a + 1);
                        cout<<"p : "<<p<<endl;
                        cout<<"C[p] : "<<c[p]<<endl;
                        if(c[p] == 0)
                                    return 0;
                        for(l = 1;l <= number;l++)
                                    if(G[p][l] && c[p] == c[l])
                                                break;
                                    if(l == number + 1)
                                                return 0;
            }
}
int main()
{
            int u, edges, x, y;

            cout<<"Enter the number of Vertices In the Given Graph G:\n";
            cin>>number;
            cout<<"Enter the number of edges In the Given Graph G:\n";
            cin>>edges;
            for(u = 1;u <= edges;u++)
            {
                        cout<<"Enter the edge In the Graph : \n";
                        cin>>x>>y;
                        G[x][y] = 1;
                        G[y][x] = 1;
            }
            for(u = 1;u <= number;u++)
                        c[u] = 0;
            cout<<"Enter the number of colors available : \n";
            cin>>a;
            cout<<"Following are the different ways by which nodes can be colored\n";
            mcoloring(1);

}





