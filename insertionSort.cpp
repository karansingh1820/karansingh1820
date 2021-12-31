#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i=1;i<n; i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
void print(int arr[],int n)
{
    int t;
    for(t=0;t<n;t++)
    {
       cout<<arr[t]<<" "; 
    }
    cout<<"\n";
}
int main()
{
    int n;
cout<<"Enter the size of array: ";
cin>>n;
int arr[n];
cout<<"\nEnter the elements of array:";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
insertionSort(arr,n);
cout<<"\nSorted array: ";
print(arr,n);
return 0;
}