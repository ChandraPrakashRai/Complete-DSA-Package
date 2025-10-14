#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m , n;
    cout<<"enter number of rows : ";
    cin>>m;
    cout<<"enter  number of columns: ";
    cin>>n;
    int arr[m][n];

    for(int i =0 ; i<m ; i++)
    {
        for(int j = 0 ; j< n ; j++)
        {
            cout<<"enter elements of  "<<i<<" row" <<" and "<<j <<" columns ";
            cin>>arr[i][j];

        }
    }

    
    for(int j =0 ; j<n; j++)
    {
        for(int i = 0 ; i< m; i++)
        {
           cout<<arr[i][j] <<" ";

        }
    }


}