#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"enter size ";
    cin>>n;
    int arr[n];
    cout<<"enter elements ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"enter size to reverse ";
    cin>>k;
    
    for(int i=0;i<n;i+=k)
    {
        int start=i;
        int end=min(i+k-1,n-1);
        while(start<end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    cout<<"after reverse ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
 
}