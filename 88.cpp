#include<iostream.h>
#include<conio.h>
int main()
{
int n,m,i,r,t;
cout<<"enter 2 num";
cin>>n>>m;
for(i=1;i<n,i<m;i++)
{
if((n%i==0)&&(m%i==0))
r=i;
}
t=(n*m)/r;
cout<<"lcm is"<<t;
return 0;
}
