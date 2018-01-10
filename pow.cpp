#include<iostream.h>
#include<conio.h>
imt main()
{
int exp,i,n,s=1;
cout<<"enter the base num";
cin>>n;
cout<<"enter the exponent value";
cin>>exp;
for(i=0;i<exp;i++)
{
s=s*n;
}
cout<<"the result is %d"<<s;
return 0;
}
