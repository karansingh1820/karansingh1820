#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}
void selection_Sort(int a[], int n)
 {
  for(int i=0;i<n-1;i++) 
  {
    int min=i;
    for (int j=i+1;j<n;j++) 
    {
      if (a[j]<a[min])
        min=j;
    }
    swap(&a[min], &a[i]);
  }
}
void print(int a[],int n)
{
    int t;
    for(t=0;t<n;t++)
    {
       cout<<a[t]<<" "; 
    }
    cout<<"\n";
}
int main()
{
    int n;
cout<<"Enter the size of array:";
cin>>n;
int a[n];
cout<<"\nEnter the elements of array:";
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
selection_Sort(a,n);
cout<<"\nSorted array: ";
print(a,n);
return 0;
}