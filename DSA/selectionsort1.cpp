#include<iostream>
using namespace std;

int selectionsort(int arr[],int n )
{
    for(int i=0; i<=n-1;i++)
    {
      int minindex=i;
      for (int j=i+1;j<n;j++)
      {
        if(arr[j]<minindex)
        {
            minindex=j;
        }
        swap(arr[minindex],arr[i]);
      }
    }
   

}
int main()
{
    int even[4]={8,4,6,2};
    
    
   cout<< selectionsort(even,4 );
   

    return 0;
}