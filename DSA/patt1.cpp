#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enterv the value of n";
    cin>>n;
    int i=1;
    //int count=0;

    while(i<=n)
    {
        int j=1;

        while(j<=n)
        {
            cout<<i;
            
            j++;
        }
        cout<<endl;
        i++;

    }
}