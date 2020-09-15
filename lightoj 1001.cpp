#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x<=10) cout<<0<<" "<<x<<endl;
        else cout<<x-10<<" "<<10<<endl;
    }
}
