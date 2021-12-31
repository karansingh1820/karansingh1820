#include<bits/stdc++.h>
using namespace std;
void helper_mergesort(int a[],int low,int mid,int high)
{
    int i=low,j=mid+1,index=low,k;
    int temp[high];
    while((i<=mid) && (j<=high))
    {
        if(a[i]<a[j])
        {
            temp[index]=a[i];
            i++;
        }
        else
        {
            temp[index]=a[j];
            j++;
        }
        index++;
    }
    if(i>mid)
    {
        while(j<=high)
        {
            temp[index]=a[j];
            j++;
            index++;
        }
    }
    else
    {
        while(i<=mid)
        {
            temp[index]=a[i];
            i++;
            index++;
        }

    }
    for(k=low;k<index;k++)
    {
        a[k]=temp[k];
    }

}
void helper(int input[],int start,int end)
{
    int mid;
    if(start<end)
    {
        mid=(start+end)/2;
        helper(input,start,mid);
        helper(input,mid+1,end);
        helper_mergesort(input,start,mid,end);
    }
}
void merge_Sort(int input[],int size)
{
    return helper(input,0,size);
}
// int main()
// {

//     int length;
//     cout<<"Enter array size: ";
//     cin>>length;
//     int *input=new int [length];
//     for(int i=0;i<length;i++)
//     {
//         cin>>input[i];
//     }
//     merge_Sort(input,length);
//     for(int i=0;i<length;i++)
//     {
//         cout<<input[i]<<" ";
//     }
//     return 0;
// }
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
merge_Sort(a,n);
cout<<"\nSorted array: ";
print(a,n);
return 0;
}
