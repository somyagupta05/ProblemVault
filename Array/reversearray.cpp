#include<iostream>
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
  for(int i=n-1;i>=0;i--)
  {
    cout<<arr[i]<<" ";
  }

}

// second method 

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
 
  int start=0,end=n-1;
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