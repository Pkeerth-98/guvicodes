#include<iostream.h>
#include<conio.h>
int main()
{
int i,n;
cout<<"enter the num";
cin>>n;
for(i=2;i<=n/2;i++)
{
if(n%i==0)
++c;
}
if(c==0)
cout<<"num is prime";
else
cout<<"num not prime";
getch();
return 0;
}
