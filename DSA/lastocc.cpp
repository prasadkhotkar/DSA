#include<iostream>
using namespace std;

int lastocc(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;

    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if (arr[mid]==key)
        {  
            ans=mid;
            start=mid+1;
            
        }
        else if(key>arr[mid])
        {
          
            start=mid+1;
        }
        else if(key<arr[mid])
        {
           end=mid-1;
        }
      mid=start+(end-start)/2;

    }
    return ans;
}


int main()
{
int even[10]={2,3,4,5,5,5,5,5,8,9};

cout<<"the last occurence of 5 is: "<<lastocc(even,10,5);
}

