#include<iostream.h>
int main()
{
int n,i;
char c[n];
int a[n],b[n];
cout<<"enter num of statement";
cin>>n;
cout<<"enter statement";
for(i=0;i<n;i++)
cin>>a[i]>>b[i]>>c[i];
cout<<"output";
for(i=0;i<n;i++)
{
if(b[i]=='/')
cout<<a[i]/c[i];
else if(b[i]=='%')
cout<<a[i]%c[i];
}
return 0;
}
