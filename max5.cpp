#include<iostream.h>
#include<conio.h>
int main()
{
int a[10],t,j,i,n;
cout<<"enter 10 num";
for(i=0;i<10;i++)
for(j=i;j<10;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;}
}
cout<<"\n max num maong 10"<<a[n-1];
  getch();
return 0;
}
