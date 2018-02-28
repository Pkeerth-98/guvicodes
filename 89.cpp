#include<iostrem.h>
#include<conio.h>
int main()
{
int n,t;
int a[n],i,j;
cout<<"enter no.of elements";
cin>>n;
cout<<"enter elements";
for(i=0;i<n;i++)
cin>>a[i]
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{ if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}}
}
cout<<"lexicographic order";
for(i=0;i<n;i++)
cout<<a[i];
return 0;
}
