#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int num, int start, int end)
{   while(start<=end){
    int mid = (start+end)/2;
        if(arr[mid] == num)
           return middle;
        if(arr[mid]>num)
           end=mid-1;
        else
           start=mid+1;
       
           }
   return -1;
}

int main()
{
   int arr[]={1,2.3,4,5,6,7,8,9,10,12,15,19,22};
   int num;
   cin>>num;
   int n = sizeof(arr)/ sizeof(arr[0]);
   int ans=binarysearch(arr,num,0,n-1);
   cout<<ans;

   return 0;
}
