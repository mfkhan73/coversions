#include<bits/stdc++.h>
using namespace std;
int binarytodecimal(int n)
{
 int x=1,ans=0,l;
 while(n>0)
 {
  l=n%10;
  ans+=l*x;
  x*=2;
  n/=10;
 }
 return ans;
}
int main()
{
 int n;
 cin>>n;
 cout<<binarytodecimal(n);
return 0;
}