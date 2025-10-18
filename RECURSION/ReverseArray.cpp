// #include<bits/stdc++.h>
// using namespace std;

// void reverse(int index , int arr[] , int n)
// {
//     if(index==n)
//     {
//         return ;
//     }
//     cout<<arr[index] ; 
//     reverse(index+1 , arr , n);
// }
 
// int main()
// {
    
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     reverse(0 ,arr , n);
// }
#include<bits/stdc++.h>
using namespace std;

void reverse(int index , int arr[] , int n)
{
    if(index<0)
    {
        return ;
    }
    cout<<arr[index] ; 
    reverse(index-1 , arr , n);
}
 
int main()
{
    
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    reverse(n-1 ,arr , n);
}