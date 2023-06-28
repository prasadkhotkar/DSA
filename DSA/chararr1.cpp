#include<iostream>
using namespace std;

char getmaxoccchar(string s)
{
    int arr[26]={0};
    
    for(int i=0;i<=s.length();i++)
    {
        char ch=s[i];
        int number=ch-'a';
        arr[number]++;

    }

        int maxi=-1;int ans=0;

        for(int i=0;i<=26;i++)
        {
            

            if (maxi<arr[i])
            {
                ans=i;
                maxi=arr[i];
            }
            
        }
        return ans+'a';
    }
    




char tolowercase(char ch)
{
    if(ch>='a'&& ch<='z')
{
    return ch;
}
else{
    char temp=ch-'A'+'a';
}
}
bool checkpalindrome(char name[],int size)
{
    int s=0;
   int e=size-1;

while(s<=e)
{
    if(tolowercase(name[s])==tolowercase(name[e]))
    {
        s++;
        e--;
    }
    else{
        return 0;
    }
    
}
  return 1;
}

void reverse(char name[], int len)
{
int s=0;
int e=len-1;

while(s<=e)
{
    swap(name[s],name[e]);
    s++;
    e--;
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
    cout<<"enter your name :";
    cin>>name;

    cout<<name<<endl;
      int  length=getlength(name);
     cout<<length<<endl;

     reverse(name,length);

     cout<<"your name is "<<name<<endl;

     cout<<checkpalindrome(name,length)<<endl;;

    cout<<getmaxoccchar(name);

     return 0;
}