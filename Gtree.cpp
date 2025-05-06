/*A book consists of chapters, chapters consist of sections and sections consist of 
subsections. Construct a tree and print the nodes. Find the time and space requirements 
of your method.  */
#include<iostream>
using namespace std;
struct node
	{
		string name;
		int count;
		node *child[30];
	}*root;
class GT
{
	public:	
	GT()
	{
		root=NULL;
	}
	
	void insert()
	{
		root=new node();
		cout<<"Enter Book Name:";
		cin>>root->name;
		cout<<"Enter Total Number of Chapters in the book:";
		cin>>root->count;
		for(int i=0;i<root->count;i++)
		{
			root->child[i]=new node();
			cout<<"Enter Name of Each Chapter In the Book:";
			cin>>root->child[i]->name;
			cout<<"Enter Total Number of Sections in the Chapter:";
			cin>>root->child[i]->count;
			for(int j=0;j<root->child[i]->count;j++)
			{
				root->child[i]->child[j]=new node();
				cout<<"Enter Name of Each Section in the Chapter:";
				cin>>root->child[i]->child[j]->name;
				cout<<"Enter Total Number of Sub-Sections in the Section:";
				cin>>root->child[i]->child[j]->count;
			}
		}	
	}
	void display()
	{
		cout<<"----Tree Hierarchy------"<<endl;
        cout<<"Book Name :"<<root->name<<endl;
         for(int i=0;i<root->count;i++)
		 {
            cout<<"|____Chapter "<<"---"<<root->child[i]->name<<endl;
            for (int j=0;j<root->child[i]->count;j++)
			{
                cout<<"____|__Section "<<"---"<<root->child[i]->child[j]->name<<endl;
            }

         }
	}
};
int main()
{
	GT Gt;
	Gt.insert();
	Gt.display();
	return 0;
	
}
