#include<bits/stdc++.h>
using namespace std;

int Sum(int index , int arr[] , int n ,  int &sum)
{
    
    if(index==n)
    {
        return 0;
    }
    // int sum = 0;
    sum = sum + arr[index];
    Sum(index+1 , arr , n  , sum);
     return sum;
}
 
int main()
{
   
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
        int sum  = 0;
   cout<< Sum(0 ,arr , n , sum);
}