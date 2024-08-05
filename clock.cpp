#include<iostream>
using namespace std;
int main()
{
    int i,choice,n1,n2,sum;
    float div;
    cout<<"****************Simple Calculator*************"<<endl;
    while(1){
    cout<<"\n1.Addition"<<endl;
    cout<<"2.subtraction"<<endl;
    cout<<"3.multiplication"<<endl;
    cout<<"4.Division"<<endl;


    cout<<"\nEnter your choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
        cout<<"Enter first number"<<endl;
        cin>>n1;
        cout<<"Enter second number"<<endl;
        cin>>n2;
        sum=n1+n2;
        cout<<"addition of "<<n1<<" and "<<n2<<" is "<<sum<<endl;
        break;
        }
        case 2:
        {
        cout<<"Enter first number"<<endl;
        cin>>n1;
        cout<<"Enter second number"<<endl;
        cin>>n2;
        sum=n1-n2;
        cout<<"subtraction of "<<n1<<" and "<<n2<<" is "<<sum<<endl;
        break;
        }
        case 3:
        {
        cout<<"Enter first number"<<endl;
        cin>>n1;
        cout<<"Enter second number"<<endl;
        cin>>n2;
        sum=n1*n2;
        cout<<"Multiplication of "<<n1<<" and "<<n2<<" is "<<sum;
        break;
        }
        case 4:
        {
        cout<<"Enter first number"<<endl;
        cin>>n1;
        cout<<"Enter second number"<<endl;
        cin>>n2;
        div=n1/n2;
        cout<<"Division of "<<n1<<" and "<<n2<<" is "<<div;
        break;
        }
    }
}
}
