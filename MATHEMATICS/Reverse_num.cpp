#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cout<<"enter the number :"<<endl;
    cin>>n;

    int ans = 0;
    int rem ;
    while(n)
    {
        rem = n%10;
        ans = ans*10 +  rem;
        n/=10;
    }
    cout<<ans;
}
