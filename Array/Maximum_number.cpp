#include<iostream>
#include<climits>
using namespace std;

int main()
{
  int n;
  cout<<"enter size of array";
  cin>>n;
  int arr[n];
  cout<<"enter elements";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int max=INT_MIN;
  for(int i=0;i<n;i++)
  {
      if(arr[i]>max)
      {
          max=arr[i];
      }
      
  }cout<<max;
}

// another method
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter size";
  cin>>n;
  int arr[n];
  cout<<"enter elements";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];

  }
  int temp=arr[0];
  for(int i=0;i<n;i++)
  {
    if(arr[i]>temp)
    {
     temp=arr[i];
    }
   
    
  } cout<<temp;
 

}