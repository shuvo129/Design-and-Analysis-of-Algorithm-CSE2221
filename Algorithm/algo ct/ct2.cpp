#include<bits/stdc++.h>
using namespace std;
void palindrome()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
        cin>>arr[i];
    bool x = true;
    for(int i=0;i<a;i++)
    {
        for(int j=i+2;j<a;j++)
        {
            if(arr[i]==arr[j])
            {
                x=false;
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    if(x) cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      palindrome();
    }
}
