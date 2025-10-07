#include<bits/stdc++.h>
using namespace std;
    
    // ********* METHOD 1*********
// bool power(int n)
// {
//     if(n<0)
//     return 0;

//     while(n%2==0)
//     {
//         n=n/2;
//     }
//     return n==1;
// }


        // *******METHOD 2 *********

        bool power(int n)
        {
            return (n>0 && (n & (n-1))==0);
        }

int main()
{
     int n ;
     cout<<"enter the number to check whether this no is power of two or not: "<<endl;
     cin>>n;

    cout<< power(n);
}