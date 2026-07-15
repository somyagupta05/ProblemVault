#include<iostream>
using namespace std;
int consecutiveone(int n,int arr[])
{
  int count=1,maxcount=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==arr[i+1])
    {
      count++;
    }
    else
    {
      maxcount=max(count,maxcount);
      count=1;
    }
  }
  return max(maxcount,count);
}
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
  cout<<consecutiveone(n,arr);
  

}