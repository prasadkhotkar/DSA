#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"enter the value of n : ";
    cin>>n;

    for(int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            cout<<"not prime";
            break;
        }
        else{
            cout<<"prime";
        }
    }
}