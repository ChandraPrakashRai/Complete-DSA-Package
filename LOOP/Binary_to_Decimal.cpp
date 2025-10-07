#include<iostream>
#include<algorithm>
#include<vector>
//   101
using namespace std;

 int binToDecimal(string n)
 {
    int ans = 0 ;
    int power = 1;

    for(int i = n.size()-1 ; i>=0 ; i--)
    {
        if(n[i]=='1')
        {
            ans = ans + power;
        }
        power = power*2;
    }

    return ans;
 }

int main()
{
    string n;
    cout<<"enter the Binary number: "<<endl;
    cin>>n;

   cout<< binToDecimal(n);

}