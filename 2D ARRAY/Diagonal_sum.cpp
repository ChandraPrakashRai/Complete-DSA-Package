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

    int sum = 0;
    for(int i =0 ; i<m ; i++)
    {
        for(int j = 0 ; j< n ; j++)
        {
            if(i==j)
            {
                sum = sum + arr[i][j];
            }

        }
    }
    cout<<sum;

}