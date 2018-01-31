#include<iostream.h>
#include<conio.h>
int main()
{
int a[n],i,t,
cout<<"enter size of array";
cin>>n;
cout<<"enter the num";
for(i=0;i<n;i++)
cin>>a[i];
  cout<<"/n largest num/t";
  for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
if(a[i])>a[j])
   { 
    t=a[i];
    a[i]=a[j];
    a[j]=t;
    }
}
cout<<a[n-1];
  getch();
  return 0;
}
