#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

struct node
{
		int ch_count;
		string label;
		
		struct node* child[10];
		
}*root;

class GT
{
	public:
		
			GT()
			{
				root = NULL;
			}
			
			string label;
			int count;
			
			void create()
			{
				root = new node;
				
				cout<<"\n Enter the Name of the Book : ";
				cin>>root -> label;
				
				cout<<"\n Enter the Number of the chapters : ";
				cin>>root -> ch_count;
				
				for(int i = 0; i < root -> ch_count; i++)
				{
					root->child[i] = new node;
					
					cout<<"\n Enter the Name of the chapter : "<< i+1;
					cin>>root->child[i]->label;
					
					cout<<"\n Enter the number of sections : ";
					cin>>root->child[i]->ch_count;
					
					
					for(int j = 0; j<root->child[i]->ch_count; j++)
					{
						root->child[i]->child[j] = new node;
						
						cout<<"\n Enter the Name of the section : "<<i+1<<"-"<<j+1;
						cin>>root->child[i]->child[j]->label;
						
						cout<<"\n Enter the Subsections : ";
						cin>>root->child[i]->child[j]->ch_count;
						
						for(int k = 0; k<root->child[i]->child[j]->ch_count; k++)
						{
							root -> child[i] -> child[j] -> child[k] = new node;
							cout<<"\n Enter the Name of the subsection : "<<i+1<<"-"<<j+1<<"-"<<k+1;
							cin>>root->child[i]->child[j]->child[k]->label;
						}
						
					}
				}
			}
				
			void display(node* r)
			{
				if(root != NULL)
				{
					cout<<"\n Name of the book : "<<root->label<<endl;
					cout<<"\n Number of Chapters : "<<root->ch_count<<endl;
					
					for(int i = 0; i<root->ch_count; i++)
					{
						cout<<"\n Name of the Chapter : "<<root->child[i]->label<<endl;
						cout<<"\n Number of the Sections : "<<root ->child[i]->ch_count<<endl;
						
						for(int j = 0; j<root->child[i]->ch_count; i++)
						{
							cout<<"\n Name of the Section : "<<root->child[i]->child[j]->label<<endl;
							cout<<"\n Number of SubSections : "<<root->child[i]->child[j]->ch_count<<endl;
							
							for(int k = 0; k<root->child[i]->child[j]->ch_count; k++)
							{
								cout<<"\n Name of the Subsection : "<<root->child[i]->child[j]->child[k]->label<<endl;
								
								
							}
						}
					}
				}
				
				else
				{
					cout<<"Please enter the Book details first!!!!!!"<<endl;
				}
			}
};	
				
				
int main()
{
		
		GT g;
		
		while(1)
		{
			cout<<"\n ---------- * Main Menu * ---------- \n ";
			cout<<"\n 1.Add Book \n";
			cout<<"\n 2.Display Book \n";
			cout<<"\n 3.Quit \n";
			cout<<"\n Enter Your Choice : ";
			int ch;
			cin>>ch;
			
			switch(ch)
			{
			
				case 1:
					g.create();
					break;
					
				case 2:
					g.display(root);
					break;
					
				case 3:
					cout<<"\n ----- END OF THE CODE ----- \n";
					break;
				
				default:
					cout<<"\n Please enter a Valid Option !!!! \n ";
					break;
			}
		}
	
		
}						
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
					

