#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cout<<"enter the year : "<<endl;
    cin>>n;

    if(n%400==0)
    cout<<n<<"is a leap year"<<endl;

    else if(n%4==0 && n%100==0)
    cout<<"not a leap year"<<endl;

    else if(n%4==0)
    cout<<n<<" is a leap year "<<endl;

    else
    cout<<"not a leap year"<<endl;
}