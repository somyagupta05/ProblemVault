#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter size ";
    cin>>n;
    
    vector<int>arr(n);
    cout<<"enter elements ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]<9)
        {
            arr[i]++;
            break;
        }
        else {
            arr[i]=0;
        }
    }
    if(arr[0]==0)
    {
        arr.insert(arr.begin(),1);
    }
    
    // size is increased by 1 in case of 999 
    for(int x : arr)
{
    cout << x << " ";
}
}

// break 
// pause
// stil
