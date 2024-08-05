#include<iostream>
using namespace std;
int main()
{
    int i,j,k,a[10][10],b[10][10],c[10][10];
    cout<<"enter 2*2 matrix 1"<<endl;
    for(i=0;i<2;++i){
        for(j=0;j<2;++j){
            cout<<"Enter element a"<<i+1<<j+1<<":";
          cin>>a[i][j];
    }}
    cout<<"enter 2*2 matrix 2"<<endl;
    for(i=0;i<2;++i){
        for(j=0;j<2;++j){
                cout<<"Enter element b"<<i+1<<j+1<<":";
          cin>>b[i][j];
    }}
     for(i=0;i<2;++i)
        for(j=0;j<2;++j){
                c[i][j]=0;
                for(k=0;k<2;++k)
                    {
        c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                  }}
    cout<<"Array multiplication"<<endl;
        for(i=0;i<2;i++)
            for(j=0;j<2;j++){
                    cout<<" "<<c[j][j];
                    if(j==1)
                        cout<<endl;
                  }
return 0;
        }




