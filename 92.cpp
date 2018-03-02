#include<iostream.h>
int main()
{
int n,a[n],s=0,i;
cout<<"enter no of elements";
cin>>n;
cout<<"enter num";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"sum is";
for(i=0;i<n;i++)
s=s+a[i];
cout<<s;
return 0;
}
