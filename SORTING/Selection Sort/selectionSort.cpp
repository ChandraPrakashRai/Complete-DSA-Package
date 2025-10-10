#include<bits/stdc++.h>
using namespace std;

vector<int>SelectionSort(vector<int>&arr , int n)
{
     
    vector<int>ans;
     for(int i = 0 ; i< n ; i++)
     {
        
        int smallest = i;

        for(int j =i +1 ; j< n ; j++)
        {
            if(arr[j]<arr[smallest])
            {
                smallest = j;
            }
        }
         swap(arr[i] , arr[smallest]);

     }
     return  ans;
}

int main()
{
    int n ;
    cout<<"enter the number of elements in array: ";
    cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i<n ;i++)
    {
        cin>>arr[i];
    }

     SelectionSort(arr , n);
   cout<<"sorted array is:"<<endl;

    for(int i = 0 ; i<n ;i++)
    {
        cout<<arr[i];
    }

   
}