#include<iostream.h>
#include<conio.h>
int main()
{
int i,a[100];
  int c=0;
cout<<"enter the string";
cin>>a[100];
  for(i=0;i<=100;i++)
  {
    if(a[i]==0)
  ++c;
 if(a[i]==1)
    ++c;
  }
  if(c!=0)
cout<<"it is binary";
else
cout<<"not binary";
getch();
return 0;
}
