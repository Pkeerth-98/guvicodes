#include<iostream.h>
int main()
{
int flag=0;
int n,i;
char a[n],b[n];
cout<<"enter length of string";
cin>>n;
cout<<"enter string";
cin>>a[n];
cout<<"enter string 2";
cin>>b[n];
for(i=0;i<n;i++)
{
if(a[i]!=b[i])
flag++;
}
if(flag!=0)
cout<<"not isogram";
else
cout<<"isogram";
return 0;
}
