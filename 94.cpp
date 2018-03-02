#include<iostream.h>
int main()
{
int n,k,i,a[n];
cout<<"size of array";
cin>>n;
cout<<"enter no.of element to display";
cin>>k;
cout<<"enter nums";
for(i=0;i<n;i++)
cin>>a[i];
cout<<k<<"th elmeent is";
cout<<a[k-1];
return 0;
}
