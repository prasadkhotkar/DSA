 #include<iostream>
 using namespace std;

// int firstocc(int arr[],int size,int key)
// {
//     int start=0;
//     int end=size-1;

//     int mid=start+(end-start)/2;
//     int ans=-1;

//     while(start<=end)
//     {
//         if (arr[mid]==key)
//         {  
//             ans=mid;
//             end=mid-1;
            
//         }
//         else if(key>arr[mid])
//         {
          
//             start=mid+1;
//         }
//         else if(key<arr[mid])
//         {
//            end=mid-1;
//         }
//       mid=start+(end-start)/2;

//     }
//     return ans;
// }


int main()
{
for(int i=0;i<=100;i++)
  {

    if (i%3==0)
    {
      cout<<"fizz";
    }
    else if(i%5==0)
    {
      cout<<"buzz";
    }
    else{
      return i;
    }
  }
}

