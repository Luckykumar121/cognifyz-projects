#include<iostream>
#define max 10
using namespace std;
void bubble_sort(int ar[max])
{
	for(int i=0;i<max;i++)      //control the size of the array ||decrease it
	{
		for(int j=0;j<max-i;j++) //compare and swap the array elements
		{
			if(ar[j]>ar[j+1])
			{
				int hold;
				hold=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=hold;
			}
		}
	}
}
void array_print(int ar[max])
{
	for(int i=0;i<max;i++)
	{
		 cout<<ar[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int ar[max];
	cout<<"enter your array elements"<<endl;
	for(int j=0;j<max;j++)         //fill the array elements
	{
		cin>>ar[j];
	}
	cout<<"your unsorted array"<<endl;
	array_print(ar);
	bubble_sort(ar);
	cout<<"your sorted array"<<endl;
	array_print(ar);
	return 0;

}