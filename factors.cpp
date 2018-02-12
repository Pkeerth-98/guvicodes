#include<iostream.h>
#include<conio.h>
int main()
{
int n,i;
cout<<"enter num";
cin>>n;
cout<<"factors are";
for(i=1;i<=n;i++)
{
if(n%i==0)
cout<<i;
}
return 0;
getch();
}
