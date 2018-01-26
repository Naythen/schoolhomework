#include<iostream>
#include<fstream>
using namespace std;


int G[100][100];
int n;

int read_data() { }
int init(int S[100],int v)  { }
int tipar(int S[100],int v) { }
int valid(int S[100],int v) { }
int succ(int S[100],int v)  { }

int dfs_it(GRAF[100][100],int dim,int node)
{
int ST[100];
int vf;
vf=1;
ST[vf]=node;
cout<<node<<" ";
while (vf>=1)
   {
   int am,este;
   do {
        am=succ(ST,vf);
        este=valid(ST,vf);
      } while(!((am&&este)||(!am)))
   if (am)
      {if (solutie(ST,vf)) { tipar(ST,vf);}
                {
                 vf++;
                 init(ST,vf);
                }
      }
    else vf--;
   }
}

int main()
{
 dfs_it(G,n,1);
 return 0;
}
