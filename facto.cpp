#include<iostream.h>
#include<conio.h>
int main()
{
int n,i,s=1;
cout<<"enter the num ";
cin>>n;
for(i=1;i<=n;i++)
{
s=s*i;
}
cout<<"the factorial is %d"<<s;
return 0;
}
