#include<iostream.h>
#include<comio.h>
int main()
{
int n,k,a[n],s=0;
cout<<"enter the num in array";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"enter the num to be added";
cin>>k;
for(i=0;i<k;i++)
{
s=s+a[i];
}
cout<<"the sum is %d"<<s;
return 0;
}
