#include<iostream.h>
#include<conio.h>
int main()
{
int i,n;
char a[100];
cout<<"enter length of string";
cin>>n;
cout<<"enter string";
cin>>a[n];
cout<<"even pos\n";
for(i=0;i<n;i++)
{
if(i%2==0)
cout<<a[i];
}
cout<<"\nodd pos\n";
for(i=0;i<n;i++)
{
if(i%2!=0)
cout<<a[i];
}
return 0;
getch();
}
