#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;



int main ()
{
  vector < vector < vector<int> > > tube;
  for(int i = 0; i < 2; i++)
  {
    vector < vector < int > > w;
    tube.push_back( w );
    for(int j = 0; j < 4; j++)
    {
      vector <int> v;
      tube[i].push_back( v );
      for(int k = 0; k < 15; k++)
      {
        tube[i][j].push_back( rand());
      }
    }
  }

  for (size_t i = 0; i < tube.size(); i++)
    for (size_t j = 0; j < tube[i].size(); j++)
      for (size_t k = 0; k < tube[i][j].size(); k++)
        cout << "tube[" << i << "][" << j << "][" << k << "] = " << tube[i][j][k] << endl;
}






vector < vector < vector<int> > > tube;
for(int i=0;i<2;i++)
{
   tube.push_back(vector<vector<int> >());
   for(int j=0;j<4;j++)
   {
       tube[i].push_back(vector<int>());
       for(int k=0;k<15;k++)
       {
           tube[i][j].push_back(value);
       }
   }
}




vector < vector < vector<int> > > tube;
tube.resize(2);
for(int i=0;i<2;i++)
{
   tube[i].resize(4);
   for(int j=0;j<4;j++)
   {
       tube[i][j].resize(15, value);
   }
}
