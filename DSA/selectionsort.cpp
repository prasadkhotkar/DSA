#include<iostream>
using namespace std;

int main()
{
  char ch;
  cout<<"enter  the character : ";
  cin>>ch;
  

  if (ch>=65 && ch<97)
  {
    cout<<"user input written in capital letter";
  }
  else if(ch>=97 && ch<122)
  {
         cout<<"it is a lower case letter : ";
  }
  return 0;
}