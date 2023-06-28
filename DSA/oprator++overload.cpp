#include<iostream>
using namespace std;

class demo{
    int x;
    public:
    void getdata()
    {
        cout<<"enter the value of x: "<<endl;
        cin>>x;

    }
    void putdata()
    {
        cout<<x;
    }

    void operator++()
    {
        x=x+1;
    }
};
int main()
{
    demo aa;   
    aa.getdata();
    cout<<"original value"<<endl;  
    aa.putdata();
    cout<<endl;
    cout<<"value after increment"<<endl;
    ++aa;
    aa.putdata();
}
