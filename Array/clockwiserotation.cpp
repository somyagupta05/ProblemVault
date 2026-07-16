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
    vector<int>v;
    int d;
    cout<<"enter rotation order ";
    cin>>d;
    
    for(int i=0;i<d;i++)
    {
        v.push_back(arr[i]);
    }
    vector<int>c;
    for(int i=d;i<n;i++)
    {
        c.push_back(arr[i]);
    }
    c.insert(c.end(),v.begin(),v.end());
   
    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
 
}