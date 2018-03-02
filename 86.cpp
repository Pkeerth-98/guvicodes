#include<iostream.h>
int main()
{
int flag=0;
int n,i,j;
char a[n];
cout<<"enter length of string";
cin>>n;
cout<<"enter string";
cin>>a[n];
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    if(a[i]==a[j])
flag++;
}
}
if((flag%2)==0)
cout<<" isogram";
else
cout<<"not isogram";
return 0;
}
