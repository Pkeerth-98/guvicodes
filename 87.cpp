#include<iostream.h>
#include<conio.h>
int main()
{
int n,m,r,i;
cout<<"enter 2 num";
cin>>n>>m;
for(i=1;i<n&&i<m;i++)
{
if((n%i==0)&&(m%i==0))
r=i;
}
cout<<"gcd is"<<r;
  return 0;
}
