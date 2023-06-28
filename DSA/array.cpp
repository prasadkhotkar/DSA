#include<iostream>
using namespace std;

bool checkpalindrome(char name[],int len)
{
   int s=0;
   int e=len-1;
   while (s<=e)
   {
    if(name[s]!=name[e])
    {
      return 0;
    }
    else{
      s++;
      e--;
    }
    
   }
   return 1;
}

void reverse(char name[],int n)
{
   int s=0;
   int e=n-1;
   while(s<e)
   {
      swap(name[s++],name[e--]);
   }
}

int getlength(char name[])
{
   int count=0;
   for(int i=0;name[i]!='\0';i++)
     {
        count++;
     }
     return count;
}
int main()
{
     char name[20];
     cout<<"enter the name of student"<<endl;
     cin>>name;
     int len=getlength(name);
     cout<<"length"<<len<<endl;
     reverse(name,len);
    cout<<name<<endl;
    
     cout<<"palindrome yes or no"<<checkpalindrome(name,len);
      return 0;
}