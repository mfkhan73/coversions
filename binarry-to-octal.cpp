#include<bits/stdc++.h>
using namespace std;
int octaltodecimal(int n)
{
 int x=1,l,ans=0;
 while(n>0)
 {
     l=n%10;
     ans+=l*x;
     x*=8;
     n/=10;
 }

return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<octaltodecimal(n);
return 0;
}