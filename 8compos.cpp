#include<iostream>
#include<conio.h>
int main()
{
int n,i,c=0;
cout<<"enter the num";
cin>>n;
for(i=2;i<n/2;i++)
{
if(n%i==0)
c++;
}
if(c!=0)
cout<<"composite num";
else
cout<<"not composite num";
return 0;
getch();
}
