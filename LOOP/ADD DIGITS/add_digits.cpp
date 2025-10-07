// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cout<<"enter number :"<<endl;
    cin>>n;

    int rem = 0;
    int ans = 0;

    while(n)
    {
        rem = n%10;
        ans = ans + rem ;

        n = n/10;
    }
    int final = 0;
    while(ans)
    {
        rem = ans%10;
        final = final + rem ;

        ans = ans/10;
    }
    

    cout<<final;
}