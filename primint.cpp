#include<iostream.h>
#include<conio.h>
int main()
{
int i=2,n,flag=0,x,y;
cout<<"enter the inerval";
cin>>x>>y;
for(n=x;n<=y;n++)
{
while(i<=n/2)
{
if(n%i==0)
  flag=1;
 else
  flag=0;
 }
 if(flag==0)
 cout<<"%d"<<n;
 }
return 0;
}
