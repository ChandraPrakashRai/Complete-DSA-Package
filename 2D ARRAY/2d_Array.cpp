#include<bits/stdc++.h>
using namespace std;


int main()
{
    int m , n;
   
    cout<<"enter number of row :";
    cin>>m;
    cout<<"enter number of row :";
    cin>>n;
     int arr[m][n];

    for(int i =0 ;i<m ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            cout<<"enter element of "<<i<<" row ans " <<j<<"column";
            cin>>arr[i][j];
        }
    }
    for(int i =0 ;i<m ; i++)
    {
         int sum = 0;
        for(int j = 0 ; j<n ; j++)
        {
           sum = sum+arr[i][j];

        }
        
            cout<<sum;
        cout<<endl;
    }
}