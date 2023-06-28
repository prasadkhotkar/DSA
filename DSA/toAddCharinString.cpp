#include<iostream>
#include<string.h>
using namespace std;

string replacechar(string str)
{
    string str;
    cout<<"enter the name : "<<endl;
    cin>>str;

    string temp="";
    
    for(int i=0;i<=str.length();i++)
    {
      if(str[i] == ' ')
      {
          temp.push_back('@');
          temp.push_back('4');
          temp.push_back('0');
      }
      else{
        temp.push_back(str[i]);
      }

    }
    cout<<temp;
}

int main()
{

   
   cout<<replacechar("my name is prasad");

}