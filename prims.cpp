#include <iostream>
#include <string>
using namespace std;

class Prims
{

	int g[10][10], n;
	const int INF = 9;
	
	public:
	    void create()
	    {
		   cout << "\nEnter the number of cities: ";
		   cin >> n;

		   for (int i = 0; i < n; i++)
		   {
		       for (int j = 0; j < n; j++)
		       {
		           g[i][j] = 0;
		       }
		   }

		   for (int i = 0; i < n; i++)
		   {
		       for (int j = 0; j < n; j++)
		       {
		           cout << "Enter the value for g[" << i << "][" << j << "]: ";
		           cin >> g[i][j];
		       }
		   }

		   cout << "\nAdjacency Matrix:\n";
		   for (int i = 0; i < n; i++)
		   {
		       for (int j = 0; j < n; j++)
		       {
		           cout << g[i][j] << " ";
		       }
		       cout << endl;
		       
		   }
    		}
    		
    		void Primsalgo()
    		{
    			int parent[10];
    			int key[10];
    			bool inMST[10];
    			
    			for(int i=0; i<n; i++)
    			{
    				key[i] = INF;
    				inMST[i] = false;
    				parent[i] = -1;
    			}
    			
    			key[0] = 0;
    			
    			for(int count = 0; count < n-1; count++)
    			{
    				int minkey = INF;
    				int u = -1;
    				
    				for(int v = 0; v < n; v++)
    				{
    					if(!inMST[v] && key[v] < minkey)
    					{
    						minkey = key[v];
    						u = v;
    					}
    				}
    				
    				
    				inMST[u] = true;
    				
    				for(int v = 0; v<n; v++)
    				{
    					if(g[u][v] && !inMST[v] && g[u][v] < key[v])
    					{
    						key[v] = g[u][v];
    						parent[v] = u;
    					}
    				}
    			}
    			
    			
    			 int totalWeight = 0; 
			   cout << "\nMinimum Spanning Tree (MST) Edges:\n";
			   for (int i = 1; i < n; i++) 
			   {
				  if (parent[i] != -1) 
				  {  
				      cout << "Distance: " << parent[i] << " - " << i << " with km: " << g[i][parent[i]] << endl;
				      totalWeight += g[i][parent[i]]; 
				      cout<<"Total Minimum distance : "<<totalWeight<<endl;
				      
    				}
    			}
    			
    		}
 };
 
 
int main()
{

	Prims s;
	
	s.create();
	s.Primsalgo();
	
	return 0;
}
    				
    		
    		
