#include<iostream.h>
#include<conio.h>
int main()
{
int x,y,i,n;
cout<<"enter 2 numr";
cin>>x>>y;
n=x*y;
for(i=1;i<n/2;i++)
{
if(n==i*i)
cout<<"perfect square";
else
cout<<"not perfect square";
}
getch();
return 0;
}
