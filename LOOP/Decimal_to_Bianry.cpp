#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n;
    cout<<"enter the decimal number: "<<endl;
    cin>>n;

    vector<int>remainder;
    int rem = 0 ;
    // int ans = 0;
    while(n!=0)
    {
         rem = n%2;
         n = n/2;
         remainder.push_back(rem);
    }
        reverse(remainder.begin() , remainder.end());
     for(int i =0 ; i< remainder.size() ; i++)
     {
            cout<<remainder[i];
     }
}