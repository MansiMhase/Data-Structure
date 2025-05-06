#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void insert(string n,string r,string d,string a)
{
	fstream f;
	string name,roll,div,addr;
	f.open("studd.txt",ios::app);
	f<<r<<" "<<n<<" "<<d<<" "<<a<<endl;
	f.close();
}
void display()
{

	fstream f;
	string name,roll,div,addr;
	f.open("studd.txt",ios::in);
	while(f>>roll>>name>>div>>addr)
	{
		cout<<"Name :"<<name<<"\n";
		cout<<"Roll no:"<<roll<<"\n";
		cout<<"Division:"<<div<<"\n";
		cout<<"Address:"<<addr<<"\n";
	}
	f.close();
}

void Delete(string roll)
{
	fstream f,f1;
	f.open("studd.txt",ios::in);
	f1.open("textt.txt",ios::out);
	string r,n,d,a;
	while(f>>r>>n>>a>>d)
	{
		if(roll!=r)
		{
			f1<<r<<" "<<n<<" "<<a<<" "<<d<<endl;
		}
	}
	f.close();
	f1.close();
	remove("studd.txt");
	rename("textt.txt","studd.txt");
	cout<<"Record Deleted!!!";
}
void Search(string roll)
{
	fstream f;
	int flag=0;
	f.open("studd.txt",ios::in);
	string r,n,d,a;
	while(f>>r>>n>>d>>a)
	{
		if(roll==r)
		{
				cout<<"Name :"<<n<<"\n";
				cout<<"Roll no:"<<r<<"\n";
				cout<<"Division:"<<d<<"\n";
				cout<<"Address:"<<a<<"\n";
				flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"Not Foundddddd";
	}
}
int main()
{
	while(true)
	{
		
		cout<<"1.insert Record"<<endl;
        cout<<"2.Display Record"<<endl;
        cout<<"3.Delete Record"<<endl;
        cout<<"4.Search Record"<<endl;
        cout<<"5.Exit";
        cout<<"Enter your choice";
        string name,roll,div,addr;
        int ch;
        cin>>ch;
        switch(ch)
        {
        	case 1:
        		cout<<"Enter Name:";
        		cin>>name;
        		cout<<"Enter Roll No.";
        		cin>>roll;
			    cout<<"Enter Division:";
			    cin>>div;
			    cout<<"Enter Address:";
			    cin>>addr;
			    insert(name,roll,div,addr);
			    break;
			case 2:
				display();
				break;
			case 3:
				cout<<"Enter Roll No.";
        		cin>>roll;
				Delete(roll);
			case 4:
				cout<<"Enter Roll No.";
        		cin>>roll;
				Search(roll);	
			case 5:
				exit(0);
				break;	    
		}
	}
return 0;
}
