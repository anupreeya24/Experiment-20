#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int arr[5]={23,45,33,23,01};
int n=5;
//bubble sort
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
}
cout<<"sorted array will be";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<",";
}
cout<<endl;
}