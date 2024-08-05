#include<iostream>
using namespace std;
int main()
{
    int arr[20],i,n,sum=0,max=0;
    cout<<"Enter number of elements in an array"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" elements in an array"<<endl;
    for(i=1;i<=n;i++)
    {
       cin>>arr[i];
    }
    cout<<"Addition of array"<<endl;
    for(i=1;i<=n;i++)
    {
       sum+=arr[i];
    }
    cout<<sum<<endl;
    cout<<"Maximum of array"<<endl;
    for(i=1;i<=n;i++)
    {
       if(arr[i]>max)\
            max=arr[i];
    }
    cout<<max<<endl;
}
