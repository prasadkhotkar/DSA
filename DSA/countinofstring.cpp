#include<iostream>
using namespace std;


int getlength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='/0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[10];
    cout<<"enter the name";
    cin>>name;
   
   cout<<getlength(name);

   return 0;
}