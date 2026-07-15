#include<iostream>
#include<vector>
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
 cout<<"enter k ";
 cin>>k;
  int start=0,end=k-1;
  while(start<end)
  {
      swap(arr[start],arr[end]);
      start++;
      end--;
  }
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<" ";
  }
 
}