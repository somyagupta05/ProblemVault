// #include<iostream>
// using namespace std;
// int  minnumber(int n,int arr[])
// {
//   int min=INT_MAX;
//   for(int i=0;i<n;i++)
//   {
//     if(arr[i]<min)
//     {
//       min=arr[i];
//     }
//   }
//   cout<<min;
// }
// int main()
// {

//   int n;
//   cout<<"enter size";
//   cin>>n;
//   int arr[n];
//   cout<<"enter elements";
//   for(int i=0;i<n;i++)
//   {
//     cin>>arr[i];
//   }
//   minnumber(n,arr);
// }



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
    if(arr[i]<temp)
    {
     temp=arr[i];
    }
   
    
  } cout<<temp;
 

}