#include<iostream>
using namespace std;
int main()
{
    int i,j,k,a[10][10],b[10][10],c[10][10];
    cout<<"Enter matrix 1"<<endl;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
    {
        cout<<"Enter element "<<i+1<<j+1<<": ";
        cin>>a[i][j];
    }
    cout<<"Enter matrix 2"<<endl;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
    {
        cout<<"Enter element "<<i+1<<j+1<<": ";
        cin>>b[i][j];
    }
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
    {
        for(k=0;k<2;k++){
        c[i][j]=0;
        c[i][j]=(a[i][j]+b[i][j]);
    }}
    cout<<"Matrix addition\n"<<endl;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
    {
        cout<<" "<<c[i][j];
        if(j==1)
            cout<<endl;
    }
    return 0;
}
