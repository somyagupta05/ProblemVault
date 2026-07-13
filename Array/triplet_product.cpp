#include<iostream>
#include<algorithm>
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
 
 sort(arr,arr+n);
 int pro1=arr[0]*arr[1]*arr[n-1];
 int pro2=arr[n-1]*arr[n-2]*arr[n-3];
 cout<<max(pro1,pro2);
 

}
 
 
// arr → start sorting from the first element.
// arr + n → stop just after the last element. 