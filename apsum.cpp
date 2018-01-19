#include<iostream.h>
#include<conio.h>
int main()
{
int a,n,d,i,x,y,s;
cout<<"enter the initial value for series";
cin>>a;
cout<<"enter the difference";
cin>>d;
cout<<"enter no.of times";
cin>>n;
for(i=a;i<=n;i++)
{
s=a+(n-1)*d;
if(i==a)
  x=s;
if(i==n)
 y=s;
}
s=n*(x+y)/2;
cout<<"sum of ap series %d"<<s;
return 0;
}
