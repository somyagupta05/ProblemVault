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

  int ans[n];
  int k;
  for(int i=0;i<n;i++)
  {
    if(arr[i]!=0)
    {
      ans[k]=arr[i];
      k++;

    }
  }
  while(k<n)
  {
    ans[k]=0;
    k++;
  }
  for(int i=0;i<n;i++)
  {
    cout<<ans[i]<<" ";
  }
}


// SECOND METHOD

#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>v;
  vector<int>c;
  int n;
  cout<<"enter size ";
  cin>>n;
  int arr[n];
  cout<<"enter elements ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
  if(arr[i]==0)
  {
    v.push_back(arr[i]);
  }
  else
  {
    c.push_back(arr[i]);
  }
}
  c.insert(c.end(),v.begin(),v.end());

  for(int i=0;i<n;i++)
  {
    cout<<c[i]<<" ";
  }


}
