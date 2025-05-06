/*Read the marks obtained by students of second year in an online examination of 
particular subject. Find out maximum and minimum marks obtained in that subject. Use 
heap data structure. Analyze the algorithm.*/ 
#include<iostream>
#include<string.h>
using namespace std;
class heap
{
	public:
	void buildmaxheap(int arr[],int n)
	{
		for(int i=n/2-1;i>=0;i--)
		{
			maxheapify(arr,n,i);
		}		
	}
	void buildminheap(int arr[],int n)
	{
		for(int i=n/2-1;i>=0;i--)
		{
			minheapify(arr,n,i);
		}
	}
	void maxheapify(int arr[],int n,int i)
	{
		int large=i;
		int left=2*i+1;
		int right=2*i+2;
		
		if(left<n&&arr[left]>arr[large])
		{
			large=left;
		}
		if(right<n&&arr[right]>arr[large])
		{
			large=right;
		}
		if(large!=i)
		{
			swap(arr[i],arr[large]);
			maxheapify(arr,n,i);
		}
		
	}
	void minheapify(int arr[],int n,int i)
	{
		int small=i;
		int left=2*i+1;
		int right=2*i+2;
		
		if(left<n&&arr[left]<arr[small])
		{
			small=left;
		}
		if(right<n&&arr[right]<arr[small])
		{
			small=right;
		}
		if(small!=i)
		{
			swap(arr[i],arr[small]);
			minheapify(arr,n,i);
		}		
	}
};
int main()
{
	heap h;
    int n;
    int arr[20];

    cout<<"Enter Number of Students :";
    cin>>n;

    for(int i =0;i<n;i++){
        cout<<"Enter Marks for Student "<<i+1<<":";
        cin>>arr[i];
    }
    h.buildmaxheap(arr,n);
    cout<<"Maximum marks "<<arr[0]<<endl;

    h.buildminheap(arr,n);
    cout<<"Minimum marks "<<arr[0]<<endl;


    return 0;
	
}
